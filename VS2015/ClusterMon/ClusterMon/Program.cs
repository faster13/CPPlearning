using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;
using System.IO;
using System.Data;

namespace ClusterMon
{
    static class Program
    {
        /// <summary>
        /// Главная точка входа для приложения.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new MainForm());
        }

        static public DataTable LoadFileServers(string path)
        {
            string pattern = @"(\w+\d+|\w+\d+\-\d+)\s+(INA|ACT)\s+(\d+)";
            string[] tmp_str = new string[3];
            char[] delimiterChars = { ' ', '\t' };

            DataTable temp_db = new DataTable("TEMP");
            temp_db.Columns.Add("ServerName", typeof(String));
            temp_db.Columns.Add("SessionType", typeof(String));
            temp_db.Columns.Add("Count", typeof(Int32));
            try
            {
                using (StreamReader sr = File.OpenText(path))
                {
                    string str_read = "";
                    Regex rg = new Regex(pattern);
                    Match m;
                    while ((str_read = sr.ReadLine()) != null)
                    {
                        m = rg.Match(str_read);
                        if (m.Success)
                        {

                            //MessageBox.Show(str_read);
                            for (int cnt = 1; cnt < m.Groups.Count; cnt++)
                                tmp_str.SetValue(m.Groups[cnt].Value, cnt - 1);
                            //tmp_str = str_read.Split(delimiterChars);
                            //MessageBox.Show(tmp_str[0] + "#" + tmp_str[1] + "#" + tmp_str[2]);
                            if (tmp_str.Length == 3)
                            {
                                temp_db.Rows.Add(new Object[] { tmp_str[0].ToLower(), tmp_str[1], tmp_str[2] });
                            }
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            return temp_db;
        }
    }
}

