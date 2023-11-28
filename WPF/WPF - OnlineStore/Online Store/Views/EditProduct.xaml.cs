using Microsoft.Win32;
using Online_Store.Models;
using System;
using System.Collections.Generic;
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

namespace Online_Store.Views;

public partial class EditProduct : Window
{
    public string ImageUrl { get; set; }
    public Product selected { get; set; }
    public EditProduct(Product prod)
    {
        InitializeComponent();
        selected = prod;
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
}
