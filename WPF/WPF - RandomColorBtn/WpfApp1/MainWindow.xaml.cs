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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp1
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void GetRandomColor(Button button)
        {
            Random random = new Random();
            Color newColor = Color.FromRgb((byte)random.Next(256), (byte)random.Next(256), (byte)random.Next(256));
            SolidColorBrush brush = new SolidColorBrush(newColor);
            button.Background = brush;
        }

        private void GetInfoFromMessageBox(Button button)
        {
            var name = button.Name;
            var padding = button.Padding;
            var margin = button.Margin;
            var opacity = button.Opacity;
            var width = button.Width;
            var height = button.Height;
            var background = button.Background;
            var fontweight = button.FontWeight;
            var fontsize = button.FontSize;
            var foreground = button.Foreground;
            var tabindex = button.TabIndex;
            var content = button.Content;
            var horizontalalignment = button.HorizontalAlignment;
            var verticalalignment = button.VerticalAlignment;
            MessageBox.Show($"Name: {name}\n" +
                    $"Padding: {padding}\n" +
                    $"Margin: {margin}\n" +
                    $"Opacity: {opacity}\n" +
                    $"Width: {width}\n" +
                    $"Height: {height}\n" +
                    $"Background: {background}\n" +
                    $"Font Weight: {fontweight}\n" +
                    $"Font Size: {fontsize}\n" +
                    $"Foreground: {foreground}\n" +
                    $"Tab Index: {tabindex}\n" +
                    $"Content: {content}\n" +
                    $"Horizontal Alignment: {horizontalalignment}\n" +
                    $"Vertical Alignment: {verticalalignment}");
        }

        private void Btn1_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn1);
            GetInfoFromMessageBox(Btn1);
        }
        private void Btn1_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn1 = sender as Button;
            gr.Children.Remove(Btn1);
            Title += $" {Btn1.Content}";
        }

        private void Btn2_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn2);
            GetInfoFromMessageBox(Btn2);
        }
        private void Btn2_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn2 = sender as Button;
            gr.Children.Remove(Btn2);
            Title += $" {Btn2.Content}";
        }

        private void Btn3_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn3);
            GetInfoFromMessageBox(Btn3);
        }
        private void Btn3_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn3 = sender as Button;
            gr.Children.Remove(Btn3);
            Title += $" {Btn3.Content}";
        }

        private void Btn4_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn4);
            GetInfoFromMessageBox(Btn4);
        }
        private void Btn4_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn4 = sender as Button;
            gr.Children.Remove(Btn4);
            Title += $" {Btn4.Content}";
        }
        private void Btn5_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn5);
            GetInfoFromMessageBox(Btn5);
        }
        private void Btn5_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn5 = sender as Button;
            gr.Children.Remove(Btn5);
            Title += $" {Btn5.Content}";
        }

        private void Btn16_Click(object sender, RoutedEventArgs e)
        {
            GetRandomColor(Btn16);
            GetInfoFromMessageBox(Btn16);
        }
        private void Btn16_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            var btn16 = sender as Button;
            gr.Children.Remove(Btn16);
            Title += $" {Btn16.Content}";
        }
    }
}
