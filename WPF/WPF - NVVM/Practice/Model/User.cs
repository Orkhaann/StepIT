using Practice.Service;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice.Model
{
    public class User :NotificationService
    {
        private int _id;
        private string? _name;
        private string? _username;
        private string? _email;
        private Address? _address;
        private string? _website;
        private Company? _company;

        public int ID { get => _id; set { _id = value; OnPropertyChanged(); } }
        public string? Name { get => _name; set { _name = value; OnPropertyChanged(); } }
        public string? Username { get => _username; set { _username = value;OnPropertyChanged(); } }
        public string? Email { get => _email; set { _email = value; OnPropertyChanged(); } }
        public Address? Address { get => _address; set { _address = value; OnPropertyChanged(); } }
        public string? Website { get => _website; set { _website = value;OnPropertyChanged(); } }
        public Company? Company { get => _company; set { _company = value; OnPropertyChanged(); } }


        public User()
        {
            Address = new();
            Company = new();
        }
    }
}
