using BankManagement.Bank;
namespace BankManagement;

public class Client
{
    public Guid id;
    private string name;
    private string surname;
    private short age;
    private float salary;
    public BankCard Card;
    public List<Transaction> transactions;
    
    public Client(string name, string surname,short age, float salary, BankCard card)
    {
        this.id = Guid.NewGuid();
        this.Name = name;
        this.Surname = surname;
        this.Age = age;
        this.Salary = salary;
        this.Card = card;
        this.transactions = new List<Transaction>();
    }

    public string Name
    {
        get => this.name;
        set
        {
            if (value.Length >= 3)
                this.name = value;
            else
                throw new InvalidDataException("Wrong Name Lenght");
        }
    }
    public string Surname
    {
        get => this.surname;
        set
        {
            if (value.Length >= 3)
                this.surname = value;
            else
                throw new InvalidDataException("Wrong Surname Lenght");
        }
    }
    public short Age
    {
        get => this.age;
        set
        {
            if (value <= 100)
                this.age = value;
            else
                throw new InvalidDataException("Wrong Age");
        }
    }
    public float Salary
    {
        get => this.salary;
        set
        {
            if (value >= 100)
                this.salary = value;
            else
                throw new InvalidDataException("Wrong Salary");
        }
    }
    
    public void showTransactions()
    {
        if (this.transactions.Count == 0)
            Console.WriteLine("Not Found Any Transaction");
        foreach(var transaction in transactions)
        {
            Console.WriteLine(transaction);
            Console.WriteLine("----------------------------------");
        }
    }
    public void showPersonalInformation()
    {
        Console.WriteLine($"Surname: {this.surname}");
        Console.WriteLine($"Name: {this.name}");
        Console.WriteLine($"Age: {this.age}");
        Console.WriteLine($"Bank of My Card: {this.Card.bankName}");
        Console.WriteLine($"Balance: {this.Card.balance}$");
    }
}