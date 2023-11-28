using Newtonsoft.Json;
namespace SurveyApp2
{
    public partial class SurveyApp : Form
    {
        public SurveyApp()
        {
            InitializeComponent();
        }

        private List<SurveyApp2.Model.User> users = new List<SurveyApp2.Model.User>();

        private void ChangeBtn_Click(object sender, EventArgs e)
        {
            int selectedIndex = UsersListBox.SelectedIndex;

            if (selectedIndex >= 0)
            {
                SurveyApp2.Model.User selectedUser = users[selectedIndex];

                selectedUser.Name = NameTextBox.Text;
                selectedUser.Surname = SurnameTextBox.Text;
                selectedUser.Email = EmailTextBox.Text;
                selectedUser.Phone = PhoneTextBox.Text;
                selectedUser.Birthday = DateTime.Parse(BirthDayPickerr.Text);

                UsersListBox.Items[selectedIndex] = $"{selectedUser.Name} {selectedUser.Surname}";
            }
            else
                MessageBox.Show("Please select an item in the ListBox.");
        }

        private void AddBtn_Click(object sender, EventArgs e)
        {
            SurveyApp2.Model.User data = new SurveyApp2.Model.User
            {
                Name = NameTextBox.Text,
                Surname = SurnameTextBox.Text,
                Email = EmailTextBox.Text,
                Phone = PhoneTextBox.Text,
                Birthday = DateTime.Parse(BirthDayPickerr.Text)
            };

            users.Add(data);

            UsersListBox.Items.Add($"{data.Name} {data.Surname}");
        }

        private void LoadBtn_Click(object sender, EventArgs e)
        {
            string fileName = FileNameTextBox.Text;

            if (File.Exists(fileName))
            {
                string json = File.ReadAllText(fileName);
                users = JsonConvert.DeserializeObject<List<SurveyApp2.Model.User>>(json);

                UsersListBox.Items.Clear();
                foreach (var data in users)
                    UsersListBox.Items.Add($"{data.Name} {data.Surname}");
            }
            else
                MessageBox.Show("The file does not exist.");
        }

        private void SaveBtn_Click(object sender, EventArgs e)
        {
            string fileName = FileNameTextBox.Text;

            if (File.Exists(fileName))
            {
                DialogResult result = MessageBox.Show("The file already exists. Do you want to overwrite it?", "File Exists", MessageBoxButtons.YesNo);

                if (result == DialogResult.No)
                    return;
            }

            string json = JsonConvert.SerializeObject(users);
            File.WriteAllText(fileName, json);
        }
    }
}