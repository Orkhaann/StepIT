using Practice.Service;

namespace Practice.Model
{
    public class Address:NotificationService
    {
        private string? _street;
        private string? _city;

        public string? Street { get => _street; set { _street = value; OnPropertyChanged(); } }
        public string? City { get => _city; set { _city = value;OnPropertyChanged(); } }
    }
}
