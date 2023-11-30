using Practice.Service;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice.Model
{
    public class Company : NotificationService
    {
        private string? _name;
        private string? _company;

        public string? Name { get => _name; set { _name = value;OnPropertyChanged(); } }
        public string? company { get => _company; set { _company = value; OnPropertyChanged(); } }
    }
}
