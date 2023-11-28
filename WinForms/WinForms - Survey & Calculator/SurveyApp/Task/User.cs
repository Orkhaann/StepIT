using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task
{
    public class User
    {
        public string Name { get; set; }
        public string Surname { get; set; }
        public string SecondName { get; set; }
        public string Country { get; set; }
        public string City { get; set; }
        public string Phone { get; set; }
        public string Email { get; set; }
        public string Birthday { get; set; }
        public string Gender { get; set; }
        public bool IsDriveLicense { get; set; }

        public User(string name, string surname, string secondName, string country, string city, string phone, string email, string birthday, string gender, bool isDriveLicense)
        {
            Name = name;
            Surname = surname;
            SecondName = secondName;
            Country = country;
            City = city;
            Phone = phone;
            Email = email;
            Birthday = birthday;
            Gender = gender;
            IsDriveLicense = isDriveLicense;
        }

        public static bool IsValidName(string name)
        {
            string pattern = @"^[A-Z][a-z]{0,9}$";
            return Regex.IsMatch(name, pattern);
        }
        public static bool IsValidSurName(string surname)
        {
            string pattern = @"^[A-Z][a-z]{0,9}$";
            return Regex.IsMatch(surname, pattern);
        }

        public static bool IsValidSecondName(string Secondname)
        {
            string pattern = @"^[A-Z][a-z]{0,9}$";
            return Regex.IsMatch(Secondname, pattern);
        }

        public static bool IsValidCountry(string country)
        {
            string pattern = @"^[A-Z][a-z]{0,9}$";
            return Regex.IsMatch(country, pattern);
        }

        public static bool IsValidCity(string city)
        {
            string pattern = @"^[A-Z][a-z]{0,9}$";
            return Regex.IsMatch(city, pattern);
        }

        public static bool IsValidEmail(string email)
        {
            string pattern = @"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$";
            return Regex.IsMatch(email, pattern);
        }

        public static bool IsValidAzerbaijanPhoneNumber(string phoneNumber)
        {
            string pattern = @"^\+994(?:10|51|70|77|99|50|55)[0-9]{7}$";
            return Regex.IsMatch(phoneNumber, pattern);
        }

    }
}
