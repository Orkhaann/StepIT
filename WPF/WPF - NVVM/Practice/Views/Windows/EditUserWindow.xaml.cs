using System.Windows;

namespace Practice.Views.Windows
{
    public partial class EditUserWindow : Window
    {
       
        public EditUserWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}
