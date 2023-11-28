namespace Task
{
    partial class DVD
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            DVDLabel = new Label();
            SuspendLayout();
            // 
            // DVDLabel
            // 
            DVDLabel.AutoSize = true;
            DVDLabel.Font = new Font("Segoe UI Black", 15.75F, FontStyle.Bold, GraphicsUnit.Point);
            DVDLabel.ForeColor = Color.Cyan;
            DVDLabel.Location = new Point(318, 211);
            DVDLabel.Name = "DVDLabel";
            DVDLabel.Size = new Size(60, 30);
            DVDLabel.TabIndex = 0;
            DVDLabel.Text = "DVD";
            DVDLabel.MouseEnter += DVDLabel_MouseEnter;
            // 
            // DVD
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.ActiveCaptionText;
            ClientSize = new Size(800, 450);
            Controls.Add(DVDLabel);
            ForeColor = Color.White;
            Name = "DVD";
            Text = "DVD Player";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label DVDLabel;
    }
}