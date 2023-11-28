using LessonMVVM.Views.Windows;
using System.Windows;

namespace LessonMVVM;


public partial class App : Application
{
    private void Main(object sender, StartupEventArgs e)
    {       
        var mainView = new MainView();
        mainView.ShowDialog();
    }
}
