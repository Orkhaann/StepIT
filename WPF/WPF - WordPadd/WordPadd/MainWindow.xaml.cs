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

namespace WordPadd
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private bool isAutoSaveEnabled = false;

        private void ToggleButton_Checked(object sender, RoutedEventArgs e)
        {
            isAutoSaveEnabled = true;
        }

        private void ToggleButton_Unchecked(object sender, RoutedEventArgs e)
        {
            isAutoSaveEnabled = false;
        }

        private void MyTextBox_TextChanged(object sender, TextChangedEventArgs e)
        {
            if (isAutoSaveEnabled)
            {
                string textToSave = MyTextBox.Text;
                string filePath = "text.txt";
                try
                {
                    System.IO.File.WriteAllText(filePath, textToSave);
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Otomatik kaydetme hatası: " + ex.Message);
                }
            }
        }


        private void SaveButton_Click(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.SaveFileDialog saveFileDialog = new Microsoft.Win32.SaveFileDialog();

            saveFileDialog.DefaultExt = ".txt";
            saveFileDialog.Filter = "Metin Dosyaları|*.txt|Tüm Dosyalar|*.*";

            bool? result = saveFileDialog.ShowDialog();

            if (result == true)
            {
                string selectedFilePath = saveFileDialog.FileName;
                string textToSave = MyTextBox.Text;
                try
                {
                    System.IO.File.WriteAllText(selectedFilePath, textToSave);
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Dosyaya kaydetme hatası: " + ex.Message);
                }
            }
        }


        private void LoadButton_Click(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.OpenFileDialog openFileDialog = new Microsoft.Win32.OpenFileDialog();
            openFileDialog.Filter = "Metin Dosyaları|*.txt|Tüm Dosyalar|*.*";
            bool? result = openFileDialog.ShowDialog();

            if (result == true)
            {
                string selectedFilePath = openFileDialog.FileName;

                try
                {
                    string fileContent = System.IO.File.ReadAllText(selectedFilePath);
                    MyTextBox.Text = fileContent;
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Dosya yükleme hatası: " + ex.Message);
                }
            }
        }

        private void Bold_Selected(object sender, RoutedEventArgs e)
        {
            MyTextBox.FontWeight = FontWeights.Bold;
        }
        private void Italic_Selected(object sender, RoutedEventArgs e)
        {
            MyTextBox.FontStyle = FontStyles.Italic;
        }
        private void Underline_Selected(object sender, RoutedEventArgs e)
        {
            TextDecoration underline = new TextDecoration();
            underline.Location = TextDecorationLocation.Underline;
            MyTextBox.TextDecorations = new TextDecorationCollection(new List<TextDecoration> { underline });
        }
        private void Bold_Unselected(object sender, RoutedEventArgs e)
        {
            MyTextBox.FontWeight = FontWeights.Normal;
        }

        private void Italic_Unselected(object sender, RoutedEventArgs e)
        {
            MyTextBox.FontStyle = FontStyles.Normal;
        }

        private void Underline_Unselected(object sender, RoutedEventArgs e)
        {
            MyTextBox.TextDecorations = new TextDecorationCollection();
        }

        private void AlignLeft_Selected(object sender, RoutedEventArgs e)
        {
            if (MyTextBox != null)
                MyTextBox.TextAlignment = TextAlignment.Left;
        }
        private void AlignRight_Selected(object sender, RoutedEventArgs e)
        {
            if (MyTextBox != null)
                MyTextBox.TextAlignment = TextAlignment.Right;
        }
        private void AlignCenter_Selected(object sender, RoutedEventArgs e)
        {
            if (MyTextBox != null)
                MyTextBox.TextAlignment = TextAlignment.Center;
        }
        private void AlignJustify_Selected(object sender, RoutedEventArgs e)
        {
            if (MyTextBox != null)
                MyTextBox.TextAlignment = TextAlignment.Justify;
        }

        private void FontSizeComboBox_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            ComboBoxItem selectedItem = (ComboBoxItem)FontSizeComboBox.SelectedItem;

            if (selectedItem != null)
            {
                string selectedFontSize = selectedItem.Content.ToString();
                if (MyTextBox != null)
                    MyTextBox.FontSize = Convert.ToDouble(selectedFontSize);
            }
        }
    }
}
