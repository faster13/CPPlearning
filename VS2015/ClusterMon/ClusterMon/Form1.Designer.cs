namespace ClusterMon
{
    partial class MainForm
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.выполнитьToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.gbxEKP = new System.Windows.Forms.GroupBox();
            this.splitCntMainForm = new System.Windows.Forms.SplitContainer();
            this.gbxEKS = new System.Windows.Forms.GroupBox();
            this.lblCluster = new System.Windows.Forms.Label();
            this.radioButton3 = new System.Windows.Forms.RadioButton();
            this.radioButton2 = new System.Windows.Forms.RadioButton();
            this.radioButton1 = new System.Windows.Forms.RadioButton();
            this.lblFilter = new System.Windows.Forms.Label();
            this.dgvServersList = new System.Windows.Forms.DataGridView();
            this.serversDataSet = new System.Data.DataSet();
            this.menuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitCntMainForm)).BeginInit();
            this.splitCntMainForm.Panel1.SuspendLayout();
            this.splitCntMainForm.Panel2.SuspendLayout();
            this.splitCntMainForm.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvServersList)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.serversDataSet)).BeginInit();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.BackColor = System.Drawing.SystemColors.InactiveCaptionText;
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.выполнитьToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1253, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // выполнитьToolStripMenuItem
            // 
            this.выполнитьToolStripMenuItem.ForeColor = System.Drawing.Color.White;
            this.выполнитьToolStripMenuItem.Name = "выполнитьToolStripMenuItem";
            this.выполнитьToolStripMenuItem.Size = new System.Drawing.Size(81, 20);
            this.выполнитьToolStripMenuItem.Text = "Выполнить";
            this.выполнитьToolStripMenuItem.Click += new System.EventHandler(this.executeTSM);
            // 
            // statusStrip1
            // 
            this.statusStrip1.Location = new System.Drawing.Point(0, 562);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(1253, 22);
            this.statusStrip1.TabIndex = 1;
            this.statusStrip1.Text = "statusStrip1";
            // 
            // gbxEKP
            // 
            this.gbxEKP.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.gbxEKP.ForeColor = System.Drawing.Color.White;
            this.gbxEKP.Location = new System.Drawing.Point(3, 264);
            this.gbxEKP.Name = "gbxEKP";
            this.gbxEKP.Size = new System.Drawing.Size(688, 265);
            this.gbxEKP.TabIndex = 2;
            this.gbxEKP.TabStop = false;
            this.gbxEKP.Text = "ЕКП";
            // 
            // splitCntMainForm
            // 
            this.splitCntMainForm.Location = new System.Drawing.Point(3, 27);
            this.splitCntMainForm.Name = "splitCntMainForm";
            // 
            // splitCntMainForm.Panel1
            // 
            this.splitCntMainForm.Panel1.Controls.Add(this.gbxEKS);
            this.splitCntMainForm.Panel1.Controls.Add(this.gbxEKP);
            this.splitCntMainForm.Panel1.Paint += new System.Windows.Forms.PaintEventHandler(this.splitContainer1_Panel1_Paint);
            // 
            // splitCntMainForm.Panel2
            // 
            this.splitCntMainForm.Panel2.BackColor = System.Drawing.SystemColors.ScrollBar;
            this.splitCntMainForm.Panel2.Controls.Add(this.lblCluster);
            this.splitCntMainForm.Panel2.Controls.Add(this.radioButton3);
            this.splitCntMainForm.Panel2.Controls.Add(this.radioButton2);
            this.splitCntMainForm.Panel2.Controls.Add(this.radioButton1);
            this.splitCntMainForm.Panel2.Controls.Add(this.lblFilter);
            this.splitCntMainForm.Panel2.Controls.Add(this.dgvServersList);
            this.splitCntMainForm.Panel2.ForeColor = System.Drawing.Color.Black;
            this.splitCntMainForm.Panel2.Paint += new System.Windows.Forms.PaintEventHandler(this.splitContainer1_Panel2_Paint);
            this.splitCntMainForm.Size = new System.Drawing.Size(1250, 532);
            this.splitCntMainForm.SplitterDistance = 699;
            this.splitCntMainForm.TabIndex = 3;
            // 
            // gbxEKS
            // 
            this.gbxEKS.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.gbxEKS.ForeColor = System.Drawing.Color.White;
            this.gbxEKS.Location = new System.Drawing.Point(3, 3);
            this.gbxEKS.Name = "gbxEKS";
            this.gbxEKS.Size = new System.Drawing.Size(688, 255);
            this.gbxEKS.TabIndex = 2;
            this.gbxEKS.TabStop = false;
            this.gbxEKS.Text = "ЕКС";
            // 
            // lblCluster
            // 
            this.lblCluster.AutoSize = true;
            this.lblCluster.BackColor = System.Drawing.SystemColors.Info;
            this.lblCluster.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.lblCluster.ForeColor = System.Drawing.Color.DarkRed;
            this.lblCluster.Location = new System.Drawing.Point(331, 3);
            this.lblCluster.Name = "lblCluster";
            this.lblCluster.Size = new System.Drawing.Size(79, 17);
            this.lblCluster.TabIndex = 5;
            this.lblCluster.Text = "КЛАСТЕР";
            // 
            // radioButton3
            // 
            this.radioButton3.AutoSize = true;
            this.radioButton3.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioButton3.ForeColor = System.Drawing.Color.Red;
            this.radioButton3.Location = new System.Drawing.Point(289, 23);
            this.radioButton3.Name = "radioButton3";
            this.radioButton3.Size = new System.Drawing.Size(121, 21);
            this.radioButton3.TabIndex = 4;
            this.radioButton3.TabStop = true;
            this.radioButton3.Text = "Проблемные";
            this.radioButton3.UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize = true;
            this.radioButton2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioButton2.ForeColor = System.Drawing.Color.ForestGreen;
            this.radioButton2.Location = new System.Drawing.Point(122, 23);
            this.radioButton2.Name = "radioButton2";
            this.radioButton2.Size = new System.Drawing.Size(121, 21);
            this.radioButton2.TabIndex = 3;
            this.radioButton2.TabStop = true;
            this.radioButton2.Text = "Работающие";
            this.radioButton2.UseVisualStyleBackColor = true;
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize = true;
            this.radioButton1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.radioButton1.ForeColor = System.Drawing.Color.White;
            this.radioButton1.Location = new System.Drawing.Point(6, 23);
            this.radioButton1.Name = "radioButton1";
            this.radioButton1.Size = new System.Drawing.Size(53, 21);
            this.radioButton1.TabIndex = 2;
            this.radioButton1.TabStop = true;
            this.radioButton1.Text = "Все";
            this.radioButton1.UseVisualStyleBackColor = true;
            // 
            // lblFilter
            // 
            this.lblFilter.AutoSize = true;
            this.lblFilter.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.lblFilter.ForeColor = System.Drawing.Color.DarkRed;
            this.lblFilter.Location = new System.Drawing.Point(3, 3);
            this.lblFilter.Name = "lblFilter";
            this.lblFilter.Size = new System.Drawing.Size(65, 17);
            this.lblFilter.TabIndex = 1;
            this.lblFilter.Text = "Фильтр";
            // 
            // dgvServersList
            // 
            dataGridViewCellStyle1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.dgvServersList.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this.dgvServersList.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.AllCellsExceptHeader;
            this.dgvServersList.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvServersList.Location = new System.Drawing.Point(-8, 61);
            this.dgvServersList.Name = "dgvServersList";
            this.dgvServersList.RowTemplate.ReadOnly = true;
            this.dgvServersList.RowTemplate.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.dgvServersList.Size = new System.Drawing.Size(553, 471);
            this.dgvServersList.TabIndex = 0;
            // 
            // serversDataSet
            // 
            this.serversDataSet.DataSetName = "NewDataSet";
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.ClientSize = new System.Drawing.Size(1253, 584);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.splitCntMainForm);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MainMenuStrip = this.menuStrip1;
            this.MaximizeBox = false;
            this.Name = "MainForm";
            this.Text = "ClusterMon v. alpha";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.splitCntMainForm.Panel1.ResumeLayout(false);
            this.splitCntMainForm.Panel2.ResumeLayout(false);
            this.splitCntMainForm.Panel2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitCntMainForm)).EndInit();
            this.splitCntMainForm.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dgvServersList)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.serversDataSet)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem выполнитьToolStripMenuItem;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.GroupBox gbxEKP;
        private System.Windows.Forms.SplitContainer splitCntMainForm;
        private System.Windows.Forms.DataGridView dgvServersList;
        private System.Windows.Forms.Label lblFilter;
        private System.Windows.Forms.Label lblCluster;
        private System.Windows.Forms.RadioButton radioButton3;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.GroupBox gbxEKS;
        private System.Data.DataSet serversDataSet;
    }
}

