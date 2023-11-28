namespace Bank;

public class Client : Person
{
    public string LiveAddress { get; set; }
    public string WorkAddress { get; set; }
    public decimal Salary { get; set; }

    public Client(int id, string name, string surname, int age, string liveAddress, string workAddress, decimal salary)
        : base(id, name, surname, age)
    {
        LiveAddress = liveAddress;
        WorkAddress = workAddress;
        Salary = salary;
    }
}