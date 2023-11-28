using LessonMVVM.ViewModels.PageViewModels;
using System.Windows.Controls;
namespace LessonMVVM.Views.Pages;

public partial class DashboardPage : Page
{
    public DashboardPage()
    {
        InitializeComponent();
        DataContext = new DashboardViewModel();
    }
}
