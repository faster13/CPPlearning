/*
Просмотр логов АС ЕКС и АС ЕКП на наличие заполнения универсальных очередей подключений.
*/
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;

namespace ClusterMon
{
    public partial class MainForm : Form
    {

        public MainForm()
        {
            InitializeComponent();
            ServersNsiDataSetTableAdapters.ServersNsiTableAdapter nsiAdapter = new ServersNsiDataSetTableAdapters.ServersNsiTableAdapter();
            ServersNsiDataSet.ServersNsiDataTable NsiDtb = new ServersNsiDataSet.ServersNsiDataTable();

            DataTable commTbl = new DataTable("COMMON");
            DataColumn idCol = commTbl.Columns.Add("ID",typeof(Int32));
            idCol.Unique = false;
            idCol.AllowDBNull = false;
            idCol.AutoIncrement = false;
            commTbl.Columns.Add("ServerName", typeof(String));
            commTbl.Columns.Add("SessionType", typeof(String));
            commTbl.Columns.Add("Count", typeof(Int32));
            commTbl.Columns.Add("TB", typeof(String));
            commTbl.Columns.Add("Cluster", typeof(String));
            commTbl.Columns.Add("AS", typeof(String));
            commTbl.Columns.Add("LB", typeof(String));
            commTbl.Columns.Add("IP", typeof(String));

            DataTable servers_db = new DataTable("LOAD");
            servers_db.Columns.Add("ServerName", typeof(String));
            servers_db.Columns.Add("SessionType", typeof(String));
            servers_db.Columns.Add("Count", typeof(Int32));

            nsiAdapter.Fill(NsiDtb);
            serversDataSet.Tables.Add(NsiDtb);
            serversDataSet.Tables.Add(commTbl);
            serversDataSet.Tables.Add(servers_db);
        }

        private void toolStripContainer1_ContentPanel_Load(object sender, EventArgs e)
        {

        }

        private void executeTSM(object sender, EventArgs e)
        {
            string path = Properties.Settings.Default.logpath;
            DataView dvServerslist = new DataView();
            BindingSource bServersSource = new BindingSource();

            serversDataSet.Tables["COMMON"].Clear();
            serversDataSet.Tables["LOAD"].Clear();

            foreach (string f in Directory.GetFiles(path))
            {
                //MessageBox.Show(f.Contains("EKS") + " != true || " + f.Contains("EKP") + " != true");
                if (f.Contains("EKS") == false && f.Contains("EKP") == false) continue; 
                try
                {
                    serversDataSet.Tables["LOAD"].Merge(Program.LoadFileServers(f));
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }
            //serversDataSet.Tables["COMMON"].Merge(serversDataSet.Tables["ServersNsi"], false, MissingSchemaAction.Add);
            //serversDataSet.Tables["COMMON"].Merge(serversDataSet.Tables["LOAD"], false, MissingSchemaAction.Add);
            var query =
                from count in serversDataSet.Tables["LOAD"].AsEnumerable()
                join nsi in serversDataSet.Tables["ServersNsi"].AsEnumerable()
                on count.Field<String>("ServerName") equals
                    nsi.Field<String>("ServerName")
                //where count.Field<Int32>("Count") > 40
                select new
                {
                    ServerName = count.Field<String>("ServerName"),
                    SessionType = count.Field<String>("SessionType"),
                    Count = count.Field<Int32>("Count"),
                    TB = nsi.Field<String>("TB"),
                    Cluster = nsi.Field<String>("Cluster"),
                    AS = nsi.Field<String>("AS"),
                    LB = nsi.Field<String>("LB"),
                    IP = nsi.Field<String>("IP")
                };
            int c = 1;
            foreach (var servers in query)
            {
                serversDataSet.Tables["COMMON"].Rows.Add(c,
                    servers.ServerName,
                    servers.SessionType,
                    servers.Count,
                    servers.TB,
                    servers.Cluster,
                    servers.AS,
                    servers.LB,
                    servers.IP);
                c++;
            }
            dgvServersList.DataSource = serversDataSet.Tables["COMMON"];
            dvServerslist.Table = serversDataSet.Tables["COMMON"];
            bServersSource.DataSource = dvServerslist;
            dgvServersList.DataSource = bServersSource;
            bServersSource.Filter = "Count > 50";
        }

        private void splitContainer1_Panel2_Paint(object sender, PaintEventArgs e)
        {

        }

        private void splitContainer1_Panel1_Paint(object sender, PaintEventArgs e)
        {

        }
    }
}
