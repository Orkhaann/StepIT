namespace Task
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
            SurveyGroup = new GroupBox();
            checkBox1 = new CheckBox();
            label1 = new Label();
            EmailLabel = new Label();
            EmailTextBox = new TextBox();
            FemaleRadioButton = new RadioButton();
            MaleRadioButton = new RadioButton();
            DateTimePicker = new DateTimePicker();
            GenderLabel = new Label();
            BirthDayLabel = new Label();
            PhoneLabel = new Label();
            PhoneTextBox = new TextBox();
            CityLabel = new Label();
            CityTextBox = new TextBox();
            CountryLabel = new Label();
            CountryTextBox = new TextBox();
            FieldLabel = new Label();
            FieldTextBox = new TextBox();
            NameLabel = new Label();
            NameTextBox = new TextBox();
            SurnamLabel = new Label();
            SurnamTextBox = new TextBox();
            SaveBtn = new Button();
            label2 = new Label();
            LoadTextBox = new TextBox();
            LoadButton = new Button();
            SurveyGroup.SuspendLayout();
            SuspendLayout();
            // 
            // SurveyGroup
            // 
            SurveyGroup.Controls.Add(checkBox1);
            SurveyGroup.Controls.Add(label1);
            SurveyGroup.Controls.Add(EmailLabel);
            SurveyGroup.Controls.Add(EmailTextBox);
            SurveyGroup.Controls.Add(FemaleRadioButton);
            SurveyGroup.Controls.Add(MaleRadioButton);
            SurveyGroup.Controls.Add(DateTimePicker);
            SurveyGroup.Controls.Add(GenderLabel);
            SurveyGroup.Controls.Add(BirthDayLabel);
            SurveyGroup.Controls.Add(PhoneLabel);
            SurveyGroup.Controls.Add(PhoneTextBox);
            SurveyGroup.Controls.Add(CityLabel);
            SurveyGroup.Controls.Add(CityTextBox);
            SurveyGroup.Controls.Add(CountryLabel);
            SurveyGroup.Controls.Add(CountryTextBox);
            SurveyGroup.Controls.Add(FieldLabel);
            SurveyGroup.Controls.Add(FieldTextBox);
            SurveyGroup.Controls.Add(NameLabel);
            SurveyGroup.Controls.Add(NameTextBox);
            SurveyGroup.Controls.Add(SurnamLabel);
            SurveyGroup.Controls.Add(SurnamTextBox);
            SurveyGroup.Location = new Point(12, 40);
            SurveyGroup.Name = "SurveyGroup";
            SurveyGroup.Size = new Size(364, 395);
            SurveyGroup.TabIndex = 0;
            SurveyGroup.TabStop = false;
            SurveyGroup.Text = "Survey";
            // 
            // checkBox1
            // 
            checkBox1.AutoSize = true;
            checkBox1.Location = new Point(106, 365);
            checkBox1.Name = "checkBox1";
            checkBox1.Size = new Size(15, 14);
            checkBox1.TabIndex = 22;
            checkBox1.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(6, 364);
            label1.Name = "label1";
            label1.Size = new Size(80, 15);
            label1.TabIndex = 21;
            label1.Text = "Driver Lisance";
            // 
            // EmailLabel
            // 
            EmailLabel.AutoSize = true;
            EmailLabel.Location = new Point(6, 247);
            EmailLabel.Name = "EmailLabel";
            EmailLabel.Size = new Size(36, 15);
            EmailLabel.TabIndex = 20;
            EmailLabel.Text = "Email";
            // 
            // EmailTextBox
            // 
            EmailTextBox.Location = new Point(66, 244);
            EmailTextBox.Name = "EmailTextBox";
            EmailTextBox.Size = new Size(292, 23);
            EmailTextBox.TabIndex = 19;
            // 
            // FemaleRadioButton
            // 
            FemaleRadioButton.AutoSize = true;
            FemaleRadioButton.Location = new Point(186, 330);
            FemaleRadioButton.Name = "FemaleRadioButton";
            FemaleRadioButton.Size = new Size(63, 19);
            FemaleRadioButton.TabIndex = 18;
            FemaleRadioButton.TabStop = true;
            FemaleRadioButton.Text = "Female";
            FemaleRadioButton.UseVisualStyleBackColor = true;
            // 
            // MaleRadioButton
            // 
            MaleRadioButton.AutoSize = true;
            MaleRadioButton.Location = new Point(106, 330);
            MaleRadioButton.Name = "MaleRadioButton";
            MaleRadioButton.Size = new Size(51, 19);
            MaleRadioButton.TabIndex = 17;
            MaleRadioButton.TabStop = true;
            MaleRadioButton.Text = "Male";
            MaleRadioButton.UseVisualStyleBackColor = true;
            // 
            // DateTimePicker
            // 
            DateTimePicker.Location = new Point(106, 288);
            DateTimePicker.Name = "DateTimePicker";
            DateTimePicker.Size = new Size(252, 23);
            DateTimePicker.TabIndex = 16;
            // 
            // GenderLabel
            // 
            GenderLabel.AutoSize = true;
            GenderLabel.Location = new Point(6, 332);
            GenderLabel.Name = "GenderLabel";
            GenderLabel.Size = new Size(45, 15);
            GenderLabel.TabIndex = 15;
            GenderLabel.Text = "Gender";
            // 
            // BirthDayLabel
            // 
            BirthDayLabel.AutoSize = true;
            BirthDayLabel.Location = new Point(6, 294);
            BirthDayLabel.Name = "BirthDayLabel";
            BirthDayLabel.Size = new Size(51, 15);
            BirthDayLabel.TabIndex = 13;
            BirthDayLabel.Text = "Birthday";
            // 
            // PhoneLabel
            // 
            PhoneLabel.AutoSize = true;
            PhoneLabel.Location = new Point(6, 218);
            PhoneLabel.Name = "PhoneLabel";
            PhoneLabel.Size = new Size(41, 15);
            PhoneLabel.TabIndex = 11;
            PhoneLabel.Text = "Phone";
            // 
            // PhoneTextBox
            // 
            PhoneTextBox.Location = new Point(66, 215);
            PhoneTextBox.Name = "PhoneTextBox";
            PhoneTextBox.Size = new Size(292, 23);
            PhoneTextBox.TabIndex = 10;
            // 
            // CityLabel
            // 
            CityLabel.AutoSize = true;
            CityLabel.Location = new Point(6, 189);
            CityLabel.Name = "CityLabel";
            CityLabel.Size = new Size(28, 15);
            CityLabel.TabIndex = 9;
            CityLabel.Text = "City";
            // 
            // CityTextBox
            // 
            CityTextBox.Location = new Point(66, 186);
            CityTextBox.Name = "CityTextBox";
            CityTextBox.Size = new Size(292, 23);
            CityTextBox.TabIndex = 8;
            // 
            // CountryLabel
            // 
            CountryLabel.AutoSize = true;
            CountryLabel.Location = new Point(6, 160);
            CountryLabel.Name = "CountryLabel";
            CountryLabel.Size = new Size(50, 15);
            CountryLabel.TabIndex = 7;
            CountryLabel.Text = "Country";
            // 
            // CountryTextBox
            // 
            CountryTextBox.Location = new Point(66, 157);
            CountryTextBox.Name = "CountryTextBox";
            CountryTextBox.Size = new Size(292, 23);
            CountryTextBox.TabIndex = 6;
            // 
            // FieldLabel
            // 
            FieldLabel.AutoSize = true;
            FieldLabel.Location = new Point(6, 99);
            FieldLabel.Name = "FieldLabel";
            FieldLabel.Size = new Size(32, 15);
            FieldLabel.TabIndex = 5;
            FieldLabel.Text = "Field";
            // 
            // FieldTextBox
            // 
            FieldTextBox.Location = new Point(66, 96);
            FieldTextBox.Name = "FieldTextBox";
            FieldTextBox.Size = new Size(292, 23);
            FieldTextBox.TabIndex = 4;
            // 
            // NameLabel
            // 
            NameLabel.AutoSize = true;
            NameLabel.Location = new Point(6, 70);
            NameLabel.Name = "NameLabel";
            NameLabel.Size = new Size(39, 15);
            NameLabel.TabIndex = 3;
            NameLabel.Text = "Name";
            // 
            // NameTextBox
            // 
            NameTextBox.Location = new Point(66, 67);
            NameTextBox.Name = "NameTextBox";
            NameTextBox.Size = new Size(292, 23);
            NameTextBox.TabIndex = 2;
            // 
            // SurnamLabel
            // 
            SurnamLabel.AutoSize = true;
            SurnamLabel.Location = new Point(6, 41);
            SurnamLabel.Name = "SurnamLabel";
            SurnamLabel.Size = new Size(54, 15);
            SurnamLabel.TabIndex = 1;
            SurnamLabel.Text = "Surname";
            // 
            // SurnamTextBox
            // 
            SurnamTextBox.Location = new Point(66, 38);
            SurnamTextBox.Name = "SurnamTextBox";
            SurnamTextBox.Size = new Size(292, 23);
            SurnamTextBox.TabIndex = 0;
            // 
            // SaveBtn
            // 
            SaveBtn.BackColor = SystemColors.ActiveBorder;
            SaveBtn.FlatStyle = FlatStyle.Flat;
            SaveBtn.Font = new Font("Segoe UI Semibold", 9.75F, FontStyle.Bold, GraphicsUnit.Point);
            SaveBtn.ForeColor = SystemColors.Control;
            SaveBtn.Location = new Point(12, 441);
            SaveBtn.Name = "SaveBtn";
            SaveBtn.Size = new Size(364, 26);
            SaveBtn.TabIndex = 1;
            SaveBtn.Text = "Save";
            SaveBtn.UseVisualStyleBackColor = false;
            SaveBtn.Click += SaveBtn_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point);
            label2.Location = new Point(149, 12);
            label2.Name = "label2";
            label2.Size = new Size(0, 25);
            label2.TabIndex = 2;
            // 
            // LoadTextBox
            // 
            LoadTextBox.Location = new Point(155, 14);
            LoadTextBox.Name = "LoadTextBox";
            LoadTextBox.Size = new Size(112, 23);
            LoadTextBox.TabIndex = 3;
            // 
            // LoadButton
            // 
            LoadButton.Location = new Point(295, 14);
            LoadButton.Name = "LoadButton";
            LoadButton.Size = new Size(75, 23);
            LoadButton.TabIndex = 4;
            LoadButton.Text = "Load";
            LoadButton.UseVisualStyleBackColor = true;
            LoadButton.Click += LoadButton_Click_1;
            // 
            // SurveyApp
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(388, 479);
            Controls.Add(LoadButton);
            Controls.Add(LoadTextBox);
            Controls.Add(label2);
            Controls.Add(SaveBtn);
            Controls.Add(SurveyGroup);
            Name = "SurveyApp";
            Text = "Form1";
            SurveyGroup.ResumeLayout(false);
            SurveyGroup.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private GroupBox SurveyGroup;
        private Button SaveBtn;
        private Label PhoneLabel;
        private TextBox PhoneTextBox;
        private Label CityLabel;
        private TextBox CityTextBox;
        private Label CountryLabel;
        private TextBox CountryTextBox;
        private Label FieldLabel;
        private TextBox FieldTextBox;
        private Label NameLabel;
        private TextBox NameTextBox;
        private Label SurnamLabel;
        private TextBox SurnamTextBox;
        private Label BirthDayLabel;
        private DateTimePicker DateTimePicker;
        private Label GenderLabel;
        private RadioButton FemaleRadioButton;
        private RadioButton MaleRadioButton;
        private Label label1;
        private Label EmailLabel;
        private TextBox EmailTextBox;
        private CheckBox checkBox1;
        private Label label2;
        private TextBox LoadTextBox;
        private Button LoadButton;
    }
}