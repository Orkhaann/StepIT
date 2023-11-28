namespace Task
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code
        private void InitializeComponent()
        {
            SuspendLayout();
            // 
            // Program
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(700, 338);
            Margin = new Padding(3, 2, 3, 2);
            Name = "Program";
            Text = "Program";
            MouseDown += Program_MouseDown;
            MouseUp += Program_MouseUp;
            ResumeLayout(false);
        }

        #endregion
    }
}