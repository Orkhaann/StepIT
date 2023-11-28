namespace WordPad
{
    partial class WordPad
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
            LoadBtn = new Button();
            SaveBtn = new Button();
            FontComboBox = new ComboBox();
            label1 = new Label();
            SizeComboBox = new ComboBox();
            label2 = new Label();
            BoldBtn = new Button();
            UnderlineBtn = new Button();
            ItalicBtn = new Button();
            ColorComboBox = new ComboBox();
            label3 = new Label();
            RightAlignBtn = new Button();
            CenterAlignBtn = new Button();
            LeftAlignBtn = new Button();
            label4 = new Label();
            label5 = new Label();
            MainTextBox = new RichTextBox();
            fontDialog1 = new FontDialog();
            colorDialog1 = new ColorDialog();
            LoadTextBox = new TextBox();
            SaveTextBox = new TextBox();
            saveFileDialog1 = new SaveFileDialog();
            openFileDialog1 = new OpenFileDialog();
            SuspendLayout();
            // 
            // LoadBtn
            // 
            LoadBtn.BackgroundImageLayout = ImageLayout.None;
            LoadBtn.Location = new Point(820, 6);
            LoadBtn.Name = "LoadBtn";
            LoadBtn.Size = new Size(75, 23);
            LoadBtn.TabIndex = 1;
            LoadBtn.Text = "Load";
            LoadBtn.UseVisualStyleBackColor = true;
            LoadBtn.Click += LoadBtn_Click;
            // 
            // SaveBtn
            // 
            SaveBtn.BackgroundImageLayout = ImageLayout.None;
            SaveBtn.Location = new Point(820, 35);
            SaveBtn.Name = "SaveBtn";
            SaveBtn.Size = new Size(75, 23);
            SaveBtn.TabIndex = 2;
            SaveBtn.Text = "Save";
            SaveBtn.UseVisualStyleBackColor = true;
            SaveBtn.Click += SaveBtn_Click;
            // 
            // FontComboBox
            // 
            FontComboBox.FormattingEnabled = true;
            FontComboBox.Location = new Point(12, 24);
            FontComboBox.Name = "FontComboBox";
            FontComboBox.Size = new Size(133, 23);
            FontComboBox.TabIndex = 5;
            FontComboBox.SelectedIndexChanged += FontComboBox_SelectedIndexChanged;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(62, 6);
            label1.Name = "label1";
            label1.Size = new Size(31, 15);
            label1.TabIndex = 6;
            label1.Text = "Font";
            // 
            // SizeComboBox
            // 
            SizeComboBox.FormattingEnabled = true;
            SizeComboBox.Location = new Point(151, 24);
            SizeComboBox.Name = "SizeComboBox";
            SizeComboBox.Size = new Size(57, 23);
            SizeComboBox.TabIndex = 7;
            SizeComboBox.SelectedIndexChanged += SizeComboBox_SelectedIndexChanged;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(166, 6);
            label2.Name = "label2";
            label2.Size = new Size(27, 15);
            label2.TabIndex = 8;
            label2.Text = "Size";
            // 
            // BoldBtn
            // 
            BoldBtn.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point);
            BoldBtn.Location = new Point(223, 24);
            BoldBtn.Name = "BoldBtn";
            BoldBtn.Size = new Size(26, 23);
            BoldBtn.TabIndex = 9;
            BoldBtn.Text = "B";
            BoldBtn.UseVisualStyleBackColor = true;
            BoldBtn.Click += BoldBtn_Click;
            // 
            // UnderlineBtn
            // 
            UnderlineBtn.Location = new Point(255, 24);
            UnderlineBtn.Name = "UnderlineBtn";
            UnderlineBtn.Size = new Size(26, 23);
            UnderlineBtn.TabIndex = 10;
            UnderlineBtn.Text = "U̲";
            UnderlineBtn.UseVisualStyleBackColor = true;
            UnderlineBtn.Click += UnderlineBtn_Click;
            // 
            // ItalicBtn
            // 
            ItalicBtn.Location = new Point(287, 24);
            ItalicBtn.Name = "ItalicBtn";
            ItalicBtn.Size = new Size(26, 23);
            ItalicBtn.TabIndex = 11;
            ItalicBtn.Text = "/";
            ItalicBtn.UseVisualStyleBackColor = true;
            ItalicBtn.Click += ItalicBtn_Click;
            // 
            // ColorComboBox
            // 
            ColorComboBox.FormattingEnabled = true;
            ColorComboBox.Location = new Point(454, 23);
            ColorComboBox.Name = "ColorComboBox";
            ColorComboBox.Size = new Size(133, 23);
            ColorComboBox.TabIndex = 12;
            ColorComboBox.SelectedIndexChanged += ColorComboBox_SelectedIndexChanged;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point);
            label3.Location = new Point(501, 6);
            label3.Name = "label3";
            label3.Size = new Size(36, 15);
            label3.TabIndex = 13;
            label3.Text = "Color";
            // 
            // RightAlignBtn
            // 
            RightAlignBtn.Location = new Point(400, 24);
            RightAlignBtn.Name = "RightAlignBtn";
            RightAlignBtn.Size = new Size(26, 23);
            RightAlignBtn.TabIndex = 16;
            RightAlignBtn.Text = "R";
            RightAlignBtn.UseVisualStyleBackColor = true;
            RightAlignBtn.Click += RightAlignBtn_Click;
            // 
            // CenterAlignBtn
            // 
            CenterAlignBtn.Location = new Point(368, 24);
            CenterAlignBtn.Name = "CenterAlignBtn";
            CenterAlignBtn.Size = new Size(26, 23);
            CenterAlignBtn.TabIndex = 15;
            CenterAlignBtn.Text = "C";
            CenterAlignBtn.UseVisualStyleBackColor = true;
            CenterAlignBtn.Click += CenterAlignBtn_Click;
            // 
            // LeftAlignBtn
            // 
            LeftAlignBtn.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point);
            LeftAlignBtn.Location = new Point(336, 24);
            LeftAlignBtn.Name = "LeftAlignBtn";
            LeftAlignBtn.Size = new Size(26, 23);
            LeftAlignBtn.TabIndex = 14;
            LeftAlignBtn.Text = "L";
            LeftAlignBtn.UseVisualStyleBackColor = true;
            LeftAlignBtn.Click += LeftAlignBtn_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(236, 6);
            label4.Name = "label4";
            label4.Size = new Size(56, 15);
            label4.TabIndex = 17;
            label4.Text = "FontStyle";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(351, 6);
            label5.Name = "label5";
            label5.Size = new Size(63, 15);
            label5.TabIndex = 18;
            label5.Text = "Alignment";
            // 
            // MainTextBox
            // 
            MainTextBox.Location = new Point(-5, 70);
            MainTextBox.Name = "MainTextBox";
            MainTextBox.Size = new Size(911, 457);
            MainTextBox.TabIndex = 19;
            MainTextBox.Text = "";
            // 
            // LoadTextBox
            // 
            LoadTextBox.BorderStyle = BorderStyle.FixedSingle;
            LoadTextBox.Location = new Point(635, 6);
            LoadTextBox.Name = "LoadTextBox";
            LoadTextBox.Size = new Size(179, 23);
            LoadTextBox.TabIndex = 20;
            // 
            // SaveTextBox
            // 
            SaveTextBox.BorderStyle = BorderStyle.FixedSingle;
            SaveTextBox.Location = new Point(635, 35);
            SaveTextBox.Name = "SaveTextBox";
            SaveTextBox.Size = new Size(179, 23);
            SaveTextBox.TabIndex = 21;
            // 
            // openFileDialog1
            // 
            openFileDialog1.FileName = "openFileDialog1";
            // 
            // WordPad
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackgroundImageLayout = ImageLayout.None;
            ClientSize = new Size(905, 525);
            Controls.Add(SaveTextBox);
            Controls.Add(LoadTextBox);
            Controls.Add(MainTextBox);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(RightAlignBtn);
            Controls.Add(CenterAlignBtn);
            Controls.Add(LeftAlignBtn);
            Controls.Add(label3);
            Controls.Add(ColorComboBox);
            Controls.Add(ItalicBtn);
            Controls.Add(UnderlineBtn);
            Controls.Add(BoldBtn);
            Controls.Add(label2);
            Controls.Add(SizeComboBox);
            Controls.Add(label1);
            Controls.Add(FontComboBox);
            Controls.Add(SaveBtn);
            Controls.Add(LoadBtn);
            Name = "WordPad";
            Text = "WordPad";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion
        private Button LoadBtn;
        private Button SaveBtn;
        private ComboBox FontComboBox;
        private Label label1;
        private ComboBox SizeComboBox;
        private Label label2;
        private Button BoldBtn;
        private Button UnderlineBtn;
        private Button ItalicBtn;
        private ComboBox ColorComboBox;
        private Label label3;
        private Button RightAlignBtn;
        private Button CenterAlignBtn;
        private Button LeftAlignBtn;
        private Label label4;
        private Label label5;
        private RichTextBox MainTextBox;
        private FontDialog fontDialog1;
        private ColorDialog colorDialog1;
        private TextBox LoadTextBox;
        private TextBox SaveTextBox;
        private SaveFileDialog saveFileDialog1;
        private OpenFileDialog openFileDialog1;
    }
}