using Online_Store.Services;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Channels;
using System.Threading.Tasks;

namespace Online_Store.Models
{
    public class Product : NotificationService 
    {
        private int _quantity;

        public int Quantity
        {
            get { return _quantity; }
            set { _quantity = value; OnPropertyChanged(); }
        }

        private float _price;

        public float Price
        {
            get { return _price; }
            set { _price = value; OnPropertyChanged(); }
        }

        private string? _name;

        public string Name
        {
            get { return _name; }
            set { _name = value; OnPropertyChanged(); }
        }

        private string? _imagePath;

        public string ImagePath
        {
            get { return _imagePath; }
            set { _imagePath = value; OnPropertyChanged(); }
        }

    }
}