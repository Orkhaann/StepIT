using System.Runtime.InteropServices;
namespace BankManagement.Bank;
public enum BankNames
{
    UniBank,
    InternationalBankOfAzerbaijan,
    BankRespublika,
    KapitalBank,
    PashaBank,
}

public class BankCard
{
    public BankNames bankName { get; set; }
    private string name;
    private string pan;
    private string pin;
    private string ccv;
    public string date { get; set; }
    public double balance { get; set; }
    
    public BankCard(BankNames Bankname, string name, string pan, string pin, string cvc,float balance = 0)
    {
        this.bankName = Bankname;
        this.Name = name;
        this.Pan = pan;
        this.Pin = pin;
        this.Ccv = cvc;
        this.date = DateTime.Now.AddYears(5).ToString();
        this.balance = balance;
    }
    
    public string Name
    {
        get => name;
        set
        {
            if (value.Length >= 3)
                name = value;
            else
                throw new InvalidDataException("Wrong Name Lenght");
        }
    }
    public string Pan
    {
        get => this.pan;
        set
        {
            if (value.Length == 16)
                this.pan = value;
            else
                throw new InvalidDataException("Wrong Pan Lenght");
        }
    }
    public string Pin
    {
        get => this.pin;
        set
        {
            if (value.Length == 4)
                this.pin = value;
            else
                throw new InvalidDataException("Wrong Pin Lenght");
        }
    }
    public string Ccv
    {
        get => this.ccv;
        set
        {
            if (value.Length == 3)
                this.ccv = value;
            else
                throw new InvalidDataException("Wrong Ccv Lenght");
        }
    }
}