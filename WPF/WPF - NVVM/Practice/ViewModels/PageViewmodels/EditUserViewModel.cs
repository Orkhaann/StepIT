using Practice.Commands;
using Practice.Database;
using Practice.Model;
using Practice.Service;
using System.Windows.Input;
#nullable disable

namespace Practice.ViewModels.PageViewmodels;

public class EditUserViewModel : NotificationService
{
    private User user;
    private User user1;

    public User User { get => user; set { user = value; OnPropertyChanged(); } }

    public User User2 { get => user1; set { user1 = value; OnPropertyChanged(); } }

    public ICommand SaveCommand { get; set; }

    public EditUserViewModel(User car)
    {
        user = car;
        user1 = new User();
        user1.Name = car.Name;
        user1.Email = car.Email;
        user1.Username = car.Username;
        user1.Address = car.Address;
        user1.ID = car.ID;
        user1.Company = car.Company;
        user1.Website = car.Website;
        SaveCommand = new RelayCommand(Save);
    }

    public void Save(object parameter)
    {
        user.Name = user1.Name;
        user.Email = user1.Email;
        user.Username = user1.Username;
        user.Address = user1.Address;
        user.ID = user1.ID;
        user.Company = user1.Company;
        user.Website = user1.Website;
        DB_USER.SaveDatabase();
    }
}