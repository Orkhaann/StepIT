using Practice.Commands;
using Practice.Database;
using Practice.Model;
using Practice.Service;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Navigation;
#nullable disable

public class AddUserPageViewModel:NotificationService
{
    private User? user;

    public User? newUser { get => user; set { user = value; OnPropertyChanged(); } }

    public ICommand AddBtnClicked{ get; set; }
    public ICommand BackBtnClicked{ get; set; }

    public AddUserPageViewModel()
    {
        DB_USER.LoadDatabase();
        this.newUser = new User();
        AddBtnClicked = new RelayCommand(AddBtn, CanAddBtn);
        BackBtnClicked = new RelayCommand(BackBtn);
    }


    public void BackBtn(object? parameter)
    {
        var pg = parameter as Page;

        pg.NavigationService.GoBack();

    }

    public void AddBtn(object? parameter)
    {
        if (newUser.Name != null && newUser.Username != null && newUser.Email != null && newUser.Website != null && newUser.Address.Street != null && newUser.Address.City != null && newUser.Company.Name != null && newUser.Company.company != null)
        {
            DB_USER.Users.Add(newUser);
            newUser = new();
            DB_USER.SaveDatabase();
        }
        else {
            MessageBox.Show("Wrong Input");
        }
    }

    public bool CanAddBtn(object? parameter)
    {
        if (newUser.Name != null && newUser.Username != null && newUser.Email != null && newUser.Website != null && newUser.Address.Street != null && newUser.Address.City != null && newUser.Company.Name != null && newUser.Company.company != null)
        {
            return true;
        }
        return false;
    }
}
