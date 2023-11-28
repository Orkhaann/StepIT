namespace Bank;

public class CEO : Person, IBankActions
{
    public decimal Salary { get; set; }

    public CEO(int id, string name, string surname, int age, decimal salary)
        : base(id, name, surname, age)
    {
        Salary = salary;
    }

    public void Organize()
    {
        Console.WriteLine($"{Name} is organizing...");
    }

    public void MakeMeeting()
    {
        Console.WriteLine($"{Name} is making a meeting...");
    }

    public void DecreasePercentage(decimal percent)
    {
        Console.WriteLine($"{Name} is decreasing percentage by {percent}%...");
    }
}