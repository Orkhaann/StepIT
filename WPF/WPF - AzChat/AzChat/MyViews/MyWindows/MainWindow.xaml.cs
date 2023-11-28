using AzChat.Models;
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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace AzChat
{
    public partial class MainWindow : Window
    {
        public ObservableCollection<MessageViewModel> Messages { get; set; } = new ObservableCollection<MessageViewModel>();
        public MainWindow()
        {
            InitializeComponent();
            inputTextBox.KeyDown += InputTextBox_KeyDown;
            messageListBox.ItemsSource = Messages;
        }

        private void InputTextBox_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Enter)
            {
                string newText = inputTextBox.Text;
                string timestamp = DateTime.Now.ToString("HH:mm:ss");

                var messageViewModel = new MessageViewModel
                {
                    Message = newText,
                    Timestamp = timestamp
                };

                Messages.Add(messageViewModel);
                inputTextBox.Clear();
            }
        }
    }
}
