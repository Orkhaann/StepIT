namespace SurveyApp2
{
    partial class SurveyApp
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

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            SurveyGroupBox = new GroupBox();
            BirthDayPickerr = new DateTimePicker();
            AddBtn = new Button();
            ChangeBtn = new Button();
            BirthdayLbl = new Label();
            PhoneLbl = new Label();
            PhoneTextBox = new TextBox();
            EmailLbl = new Label();
            EmailTextBox = new TextBox();
            SurnameLbl = new Label();
            SurnameTextBox = new TextBox();
            NameLbl = new Label();
            NameTextBox = new TextBox();
            UsersListBox = new ListBox();
            FileNameTextBox = new TextBox();
            LoadBtn = new Button();
            SaveBtn = new Button();
            button3 = new Button();
            SurveyTextLbl = new Label();
            SurveyGroupBox.SuspendLayout();
            SuspendLayout();
            // 
            // SurveyGroupBox
            // 
            SurveyGroupBox.Controls.Add(BirthDayPickerr);
            SurveyGroupBox.Controls.Add(AddBtn);
            SurveyGroupBox.Controls.Add(ChangeBtn);
            SurveyGroupBox.Controls.Add(BirthdayLbl);
            SurveyGroupBox.Controls.Add(PhoneLbl);
            SurveyGroupBox.Controls.Add(PhoneTextBox);
            SurveyGroupBox.Controls.Add(EmailLbl);
            SurveyGroupBox.Controls.Add(EmailTextBox);
            SurveyGroupBox.Controls.Add(SurnameLbl);
            SurveyGroupBox.Controls.Add(SurnameTextBox);
            SurveyGroupBox.Controls.Add(NameLbl);
            SurveyGroupBox.Controls.Add(NameTextBox);
            SurveyGroupBox.Location = new Point(12, 25);
            SurveyGroupBox.Name = "SurveyGroupBox";
            SurveyGroupBox.Size = new Size(482, 357);
            SurveyGroupBox.TabIndex = 0;
            SurveyGroupBox.TabStop = false;
            SurveyGroupBox.Text = "Survey";
            // 
            // BirthDayPickerr
            // 
            BirthDayPickerr.Location = new Point(108, 218);
            BirthDayPickerr.Name = "BirthDayPickerr";
            BirthDayPickerr.Size = new Size(272, 23);
            BirthDayPickerr.TabIndex = 11;
            // 
            // AddBtn
            // 
            AddBtn.Location = new Point(354, 304);
            AddBtn.Name = "AddBtn";
            AddBtn.Size = new Size(104, 30);
            AddBtn.TabIndex = 10;
            AddBtn.Text = "Add";
            AddBtn.UseVisualStyleBackColor = true;
            AddBtn.Click += AddBtn_Click;
            // 
            // ChangeBtn
            // 
            ChangeBtn.Location = new Point(354, 268);
            ChangeBtn.Name = "ChangeBtn";
            ChangeBtn.Size = new Size(104, 30);
            ChangeBtn.TabIndex = 6;
            ChangeBtn.Text = "Change";
            ChangeBtn.UseVisualStyleBackColor = true;
            ChangeBtn.Click += ChangeBtn_Click;
            // 
            // BirthdayLbl
            // 
            BirthdayLbl.AutoSize = true;
            BirthdayLbl.Font = new Font("Segoe UI", 11F, FontStyle.Regular, GraphicsUnit.Point);
            BirthdayLbl.Location = new Point(15, 218);
            BirthdayLbl.Name = "BirthdayLbl";
            BirthdayLbl.Size = new Size(66, 20);
            BirthdayLbl.TabIndex = 9;
            BirthdayLbl.Text = "BirthDay";
            // 
            // PhoneLbl
            // 
            PhoneLbl.AutoSize = true;
            PhoneLbl.Font = new Font("Segoe UI", 11F, FontStyle.Regular, GraphicsUnit.Point);
            PhoneLbl.Location = new Point(15, 174);
            PhoneLbl.Name = "PhoneLbl";
            PhoneLbl.Size = new Size(50, 20);
            PhoneLbl.TabIndex = 7;
            PhoneLbl.Text = "Phone";
            // 
            // PhoneTextBox
            // 
            PhoneTextBox.Location = new Point(108, 171);
            PhoneTextBox.Name = "PhoneTextBox";
            PhoneTextBox.Size = new Size(272, 23);
            PhoneTextBox.TabIndex = 6;
            // 
            // EmailLbl
            // 
            EmailLbl.AutoSize = true;
            EmailLbl.Font = new Font("Segoe UI", 11F, FontStyle.Regular, GraphicsUnit.Point);
            EmailLbl.Location = new Point(15, 129);
            EmailLbl.Name = "EmailLbl";
            EmailLbl.Size = new Size(46, 20);
            EmailLbl.TabIndex = 5;
            EmailLbl.Text = "Email";
            // 
            // EmailTextBox
            // 
            EmailTextBox.Location = new Point(108, 126);
            EmailTextBox.Name = "EmailTextBox";
            EmailTextBox.Size = new Size(272, 23);
            EmailTextBox.TabIndex = 4;
            // 
            // SurnameLbl
            // 
            SurnameLbl.AutoSize = true;
            SurnameLbl.Font = new Font("Segoe UI", 11F, FontStyle.Regular, GraphicsUnit.Point);
            SurnameLbl.Location = new Point(14, 84);
            SurnameLbl.Name = "SurnameLbl";
            SurnameLbl.Size = new Size(67, 20);
            SurnameLbl.TabIndex = 3;
            SurnameLbl.Text = "Surname";
            // 
            // SurnameTextBox
            // 
            SurnameTextBox.Location = new Point(108, 81);
            SurnameTextBox.Name = "SurnameTextBox";
            SurnameTextBox.Size = new Size(272, 23);
            SurnameTextBox.TabIndex = 2;
            // 
            // NameLbl
            // 
            NameLbl.AutoSize = true;
            NameLbl.Font = new Font("Segoe UI", 11F, FontStyle.Regular, GraphicsUnit.Point);
            NameLbl.Location = new Point(15, 42);
            NameLbl.Name = "NameLbl";
            NameLbl.Size = new Size(49, 20);
            NameLbl.TabIndex = 1;
            NameLbl.Text = "Name";
            // 
            // NameTextBox
            // 
            NameTextBox.Location = new Point(108, 39);
            NameTextBox.Name = "NameTextBox";
            NameTextBox.Size = new Size(272, 23);
            NameTextBox.TabIndex = 0;
            // 
            // UsersListBox
            // 
            UsersListBox.FormattingEnabled = true;
            UsersListBox.ItemHeight = 15;
            UsersListBox.Location = new Point(521, 35);
            UsersListBox.Name = "UsersListBox";
            UsersListBox.Size = new Size(221, 409);
            UsersListBox.TabIndex = 1;
            // 
            // FileNameTextBox
            // 
            FileNameTextBox.Location = new Point(521, 450);
            FileNameTextBox.Name = "FileNameTextBox";
            FileNameTextBox.Size = new Size(221, 23);
            FileNameTextBox.TabIndex = 2;
            // 
            // LoadBtn
            // 
            LoadBtn.Location = new Point(521, 485);
            LoadBtn.Name = "LoadBtn";
            LoadBtn.Size = new Size(104, 30);
            LoadBtn.TabIndex = 3;
            LoadBtn.Text = "Load";
            LoadBtn.UseVisualStyleBackColor = true;
            LoadBtn.Click += LoadBtn_Click;
            // 
            // SaveBtn
            // 
            SaveBtn.Location = new Point(631, 485);
            SaveBtn.Name = "SaveBtn";
            SaveBtn.Size = new Size(111, 29);
            SaveBtn.TabIndex = 4;
            SaveBtn.Text = "Save";
            SaveBtn.UseVisualStyleBackColor = true;
            SaveBtn.Click += SaveBtn_Click;
            // 
            // button3
            // 
            button3.Location = new Point(654, 492);
            button3.Name = "button3";
            button3.Size = new Size(8, 8);
            button3.TabIndex = 5;
            button3.Text = "button3";
            button3.UseVisualStyleBackColor = true;
            // 
            // SurveyTextLbl
            // 
            SurveyTextLbl.AutoSize = true;
            SurveyTextLbl.Font = new Font("Segoe UI", 45.75F, FontStyle.Bold, GraphicsUnit.Point);
            SurveyTextLbl.Location = new Point(147, 418);
            SurveyTextLbl.Name = "SurveyTextLbl";
            SurveyTextLbl.Size = new Size(263, 82);
            SurveyTextLbl.TabIndex = 6;
            SurveyTextLbl.Text = "SURVEY";
            // 
            // SurveyApp
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(757, 534);
            Controls.Add(SurveyTextLbl);
            Controls.Add(button3);
            Controls.Add(SaveBtn);
            Controls.Add(LoadBtn);
            Controls.Add(FileNameTextBox);
            Controls.Add(UsersListBox);
            Controls.Add(SurveyGroupBox);
            Name = "SurveyApp";
            Text = "Survey";
            SurveyGroupBox.ResumeLayout(false);
            SurveyGroupBox.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private GroupBox SurveyGroupBox;
        private ListBox UsersListBox;
        private TextBox FileNameTextBox;
        private Button LoadBtn;
        private Button SaveBtn;
        private TextBox NameTextBox;
        private Button AddBtn;
        private Button ChangeBtn;
        private Label BirthdayLbl;
        private Label PhoneLbl;
        private TextBox PhoneTextBox;
        private Label EmailLbl;
        private TextBox EmailTextBox;
        private Label SurnameLbl;
        private TextBox SurnameTextBox;
        private Label NameLbl;
        private Button button3;
        private Label SurveyTextLbl;
        private DateTimePicker BirthDayPickerr;
    }
}