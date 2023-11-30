using Practice.Database;
using System.Windows;
using System.Windows.Navigation;

namespace Practice.Views.Windows
{
    public partial class MainWindow : NavigationWindow
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void NavigationWindow_Loaded(object sender, RoutedEventArgs e)
        {
            DB_USER.LoadDatabase();
        }
    }
}
