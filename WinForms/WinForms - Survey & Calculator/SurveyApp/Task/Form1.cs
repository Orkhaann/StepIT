using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using System.Windows.Forms;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace Task
{
    public partial class SurveyApp : Form
    {
        private List<User> userList = new List<User>();

        public SurveyApp()
        {
            InitializeComponent();
        }

        private void SaveBtn_Click(object sender, EventArgs e)
        {
            string name = NameTextBox.Text;
            if (!User.IsValidName(name))
            {
                MessageBox.Show("Enter a valid name");
                return;
            }

            string surname = SurnamTextBox.Text;
            if (!User.IsValidSurName(surname))
            {
                MessageBox.Show("Enter a valid surname");
                return;
            }

            string secondName = FieldTextBox.Text;
            if (!User.IsValidSecondName(secondName))
            {
                MessageBox.Show("Enter a valid secondname");
                return;
            }

            string country = CountryTextBox.Text;
            if (!User.IsValidCountry(country))
            {
                MessageBox.Show("Enter a valid country");
                return;
            }

            string city = CityTextBox.Text;
            if (!User.IsValidCity(city))
            {
                MessageBox.Show("Enter a valid city");
                return;
            }

            string phone = PhoneTextBox.Text;
            if (!User.IsValidAzerbaijanPhoneNumber(phone))
            {
                MessageBox.Show("Enter a valid phone");
                return;
            }

            string email = EmailTextBox.Text;
            if (!User.IsValidEmail(email))
            {
                MessageBox.Show("Enter a valid email");
                return;
            }

            string birthday = DateTimePicker.Text;
            string gender = MaleRadioButton.Checked ? "Male" : "Female";
            bool isDriveLicense = checkBox1.Checked;
            User user = new User(name, surname, secondName, country, city, phone, email, birthday, gender, isDriveLicense);

            string json = JsonConvert.SerializeObject(user);
            string fileName = email + ".json";
            File.WriteAllText(fileName, json);
        }

        private void LoadButton_Click_1(object sender, EventArgs e)
        {
            string nameToLoad = LoadTextBox.Text;
            string fileName = nameToLoad + ".json";

            if (!File.Exists(fileName))
            {
                MessageBox.Show("A JSON file with the specified name could not be found.");
                return;
            }

            try
            {
                string json = File.ReadAllText(fileName);
                User loadedUser = JsonConvert.DeserializeObject<User>(json);

                if (loadedUser != null)
                {
                    NameTextBox.Text = loadedUser.Name;
                    SurnamTextBox.Text = loadedUser.Surname;
                    FieldTextBox.Text = loadedUser.SecondName;
                    CountryTextBox.Text = loadedUser.Country;
                    CityTextBox.Text = loadedUser.City;
                    PhoneTextBox.Text = loadedUser.Phone;
                    EmailTextBox.Text = loadedUser.Email;
                    DateTimePicker.Text = loadedUser.Birthday;
                    MaleRadioButton.Checked = (loadedUser.Gender == "Male");
                    FemaleRadioButton.Checked = (loadedUser.Gender == "Female");
                    checkBox1.Checked = loadedUser.IsDriveLicense;

                    MessageBox.Show("The information has been uploaded successfully.");
                }
                else
                    MessageBox.Show("A user with the specified email address could not be found.");
            }
            catch (Exception ex)
            {
                MessageBox.Show("File read error: " + ex.Message);
            }
        }

    }

}