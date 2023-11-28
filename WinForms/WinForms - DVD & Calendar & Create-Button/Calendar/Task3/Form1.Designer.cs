namespace Task3
{
    partial class Date
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
            components = new System.ComponentModel.Container();
            BakuBtn = new Button();
            pictureBoxBackground = new PictureBox();
            TimeLabel = new Label();
            LondonBtn = new Button();
            TokyoBtn = new Button();
            NewYorkBtn = new Button();
            IstanbulBtn = new Button();
            ParisBtn = new Button();
            ViennaBtn = new Button();
            groupBox1 = new GroupBox();
            CalendarLabel = new Label();
            BakuTimer = new System.Windows.Forms.Timer(components);
            LondonTimer = new System.Windows.Forms.Timer(components);
            TokyoTimer = new System.Windows.Forms.Timer(components);
            NewYorkTimer = new System.Windows.Forms.Timer(components);
            IstanbulTimer = new System.Windows.Forms.Timer(components);
            ViennaTimer = new System.Windows.Forms.Timer(components);
            ParisTimer = new System.Windows.Forms.Timer(components);
            ModeButton = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)pictureBoxBackground).BeginInit();
            groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)ModeButton).BeginInit();
            SuspendLayout();
            // 
            // BakuBtn
            // 
            BakuBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            BakuBtn.Location = new Point(34, 394);
            BakuBtn.Name = "BakuBtn";
            BakuBtn.Size = new Size(98, 38);
            BakuBtn.TabIndex = 0;
            BakuBtn.Text = "Baku";
            BakuBtn.UseVisualStyleBackColor = true;
            BakuBtn.Click += BakuBtn_Click;
            // 
            // pictureBoxBackground
            // 
            pictureBoxBackground.BackgroundImage = Properties.Resources.vienna;
            pictureBoxBackground.BackgroundImageLayout = ImageLayout.Stretch;
            pictureBoxBackground.Location = new Point(7, 21);
            pictureBoxBackground.Name = "pictureBoxBackground";
            pictureBoxBackground.Size = new Size(312, 175);
            pictureBoxBackground.TabIndex = 2;
            pictureBoxBackground.TabStop = false;
            // 
            // TimeLabel
            // 
            TimeLabel.AutoSize = true;
            TimeLabel.Font = new Font("Segoe UI", 72F, FontStyle.Bold, GraphicsUnit.Point);
            TimeLabel.Location = new Point(337, 157);
            TimeLabel.Name = "TimeLabel";
            TimeLabel.Size = new Size(436, 128);
            TimeLabel.TabIndex = 3;
            TimeLabel.Text = "10:20:20";
            // 
            // LondonBtn
            // 
            LondonBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            LondonBtn.Location = new Point(138, 394);
            LondonBtn.Name = "LondonBtn";
            LondonBtn.Size = new Size(98, 38);
            LondonBtn.TabIndex = 4;
            LondonBtn.Text = "London";
            LondonBtn.UseVisualStyleBackColor = true;
            LondonBtn.Click += LondonBtn_Click;
            // 
            // TokyoBtn
            // 
            TokyoBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            TokyoBtn.Location = new Point(242, 394);
            TokyoBtn.Name = "TokyoBtn";
            TokyoBtn.Size = new Size(98, 38);
            TokyoBtn.TabIndex = 5;
            TokyoBtn.Text = "Tokyo";
            TokyoBtn.UseVisualStyleBackColor = true;
            TokyoBtn.Click += TokyoBtn_Click;
            // 
            // NewYorkBtn
            // 
            NewYorkBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            NewYorkBtn.Location = new Point(346, 394);
            NewYorkBtn.Name = "NewYorkBtn";
            NewYorkBtn.Size = new Size(98, 38);
            NewYorkBtn.TabIndex = 6;
            NewYorkBtn.Text = "NewYork";
            NewYorkBtn.UseVisualStyleBackColor = true;
            NewYorkBtn.Click += NewYorkBtn_Click;
            // 
            // IstanbulBtn
            // 
            IstanbulBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            IstanbulBtn.Location = new Point(450, 394);
            IstanbulBtn.Name = "IstanbulBtn";
            IstanbulBtn.Size = new Size(98, 38);
            IstanbulBtn.TabIndex = 7;
            IstanbulBtn.Text = "Istanbul";
            IstanbulBtn.UseVisualStyleBackColor = true;
            IstanbulBtn.Click += IstanbulBtn_Click;
            // 
            // ParisBtn
            // 
            ParisBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            ParisBtn.Location = new Point(554, 394);
            ParisBtn.Name = "ParisBtn";
            ParisBtn.Size = new Size(98, 38);
            ParisBtn.TabIndex = 8;
            ParisBtn.Text = "Paris";
            ParisBtn.UseVisualStyleBackColor = true;
            ParisBtn.Click += ParisBtn_Click;
            // 
            // ViennaBtn
            // 
            ViennaBtn.Font = new Font("Segoe UI Semibold", 11.25F, FontStyle.Bold, GraphicsUnit.Point);
            ViennaBtn.Location = new Point(658, 394);
            ViennaBtn.Name = "ViennaBtn";
            ViennaBtn.Size = new Size(98, 38);
            ViennaBtn.TabIndex = 9;
            ViennaBtn.Text = "Vienna";
            ViennaBtn.UseVisualStyleBackColor = true;
            ViennaBtn.Click += ViennaBtn_Click;
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(pictureBoxBackground);
            groupBox1.Location = new Point(12, 128);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(328, 208);
            groupBox1.TabIndex = 10;
            groupBox1.TabStop = false;
            // 
            // CalendarLabel
            // 
            CalendarLabel.AutoSize = true;
            CalendarLabel.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
            CalendarLabel.Location = new Point(664, 9);
            CalendarLabel.Name = "CalendarLabel";
            CalendarLabel.Size = new Size(124, 21);
            CalendarLabel.TabIndex = 11;
            CalendarLabel.Text = "7 October 2023";
            // 
            // BakuTimer
            // 
            BakuTimer.Interval = 1000;
            // 
            // ModeButton
            // 
            ModeButton.BackgroundImage = Properties.Resources.moon;
            ModeButton.BackgroundImageLayout = ImageLayout.Zoom;
            ModeButton.Location = new Point(12, 9);
            ModeButton.Name = "ModeButton";
            ModeButton.Size = new Size(27, 21);
            ModeButton.TabIndex = 12;
            ModeButton.TabStop = false;
            ModeButton.Click += ModeButton_Click_1;
            // 
            // Date
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(ModeButton);
            Controls.Add(CalendarLabel);
            Controls.Add(groupBox1);
            Controls.Add(ViennaBtn);
            Controls.Add(ParisBtn);
            Controls.Add(IstanbulBtn);
            Controls.Add(NewYorkBtn);
            Controls.Add(TokyoBtn);
            Controls.Add(LondonBtn);
            Controls.Add(TimeLabel);
            Controls.Add(BakuBtn);
            Name = "Date";
            Text = "Date";
            ((System.ComponentModel.ISupportInitialize)pictureBoxBackground).EndInit();
            groupBox1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)ModeButton).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button BakuBtn;
        private PictureBox pictureBoxBackground;
        private Label TimeLabel;
        private Button LondonBtn;
        private Button TokyoBtn;
        private Button NewYorkBtn;
        private Button IstanbulBtn;
        private Button ParisBtn;
        private Button ViennaBtn;
        private GroupBox groupBox1;
        private Label CalendarLabel;
        private System.Windows.Forms.Timer BakuTimer;
        private System.Windows.Forms.Timer LondonTimer;
        private System.Windows.Forms.Timer TokyoTimer;
        private System.Windows.Forms.Timer NewYorkTimer;
        private System.Windows.Forms.Timer IstanbulTimer;
        private System.Windows.Forms.Timer ViennaTimer;
        private System.Windows.Forms.Timer ParisTimer;
        private PictureBox ModeButton;
    }
}