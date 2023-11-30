using Practice.Database;
using Practice.ViewModels.PageViewmodels;
using System.Windows.Controls;

namespace Practice.Views.Pages;

public partial class MainPage : Page
{
    public MainPage()
    {
        InitializeComponent();
        DB_USER.LoadDatabase();

        DataContext = new MainPageViewModel();
    }
}
