using Practice.Commands;
using Practice.Database;
using Practice.Model;
using Practice.Service;
using System.Collections.ObjectModel;
using System.Windows.Controls;
using System.Windows.Input;
#nullable disable

namespace Practice.ViewModels.PageViewmodels
{
    internal class GetAllUserViewModel:NotificationService
    {
        private ObservableCollection<User> users;

        public ObservableCollection<User> Users { get => users; set { users = value; OnPropertyChanged(); } }

        public ICommand BackBtnClicked { get; set; }

        public GetAllUserViewModel()
        {
            Database.DB_USER.LoadDatabase();
            Users = Database.DB_USER.Users;
            BackBtnClicked = new RelayCommand(BackBtn);

        }

        public void BackBtn(object? parameter)
        {
            var pg = parameter as Page;

            pg.NavigationService.GoBack();

        }
    }
}
