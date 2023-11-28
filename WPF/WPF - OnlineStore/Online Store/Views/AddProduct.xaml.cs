using MaterialDesignThemes.Wpf;
using Microsoft.Win32;
using Online_Store.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace Online_Store.Views
{
   
    public partial class AddProduct : Window
    {
        public ObservableCollection<Product> Prods { get; set; }

        public string ImageUrl { get; set; } 
        public AddProduct(ObservableCollection<Product> prods)
        {
            InitializeComponent();
            Prods = prods;

            DataContext = this;



        }

     
     

        private void uploadBtn_Click(object sender, RoutedEventArgs e)
        {
                Image img = new();
                PreviewImage.Children.Clear();
            var openFile = new OpenFileDialog();
            openFile.Filter = "Image files|*.jpg;*.jpeg;*.;*.png";
            if (openFile.ShowDialog() == true)
            {
                ImageUrl = openFile.FileName;

                img.Source = new BitmapImage(new Uri(ImageUrl)); ;

                PreviewImage.Children.Add(img);


            }

        }

   

        private void AddButton_Click_1(object sender, RoutedEventArgs e)
        {
            if (NameTxtBox.Text!=string.Empty && PriceTxtBox.Text != null && QuantityTextBox.Text !=null && ImageUrl!=default )
            {
                Prods.Add(new() { Name = NameTxtBox.Text, Price = float.Parse(PriceTxtBox.Text), Quantity = int.Parse(QuantityTextBox.Text), ImagePath = ImageUrl });
                NameTxtBox.Clear();
                PriceTxtBox.Clear();
                QuantityTextBox.Clear();
                PreviewImage.Children.Clear();
                MessageBox.Show("Successfuly added!!");
            }
            else
            {
                MessageBox.Show("Values can't be null");
            }
        }
    }
}
