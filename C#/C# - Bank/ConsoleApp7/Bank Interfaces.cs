namespace Bank;

public interface IBankActions
{
    void Organize();
    void MakeMeeting();
    void DecreasePercentage(decimal percent);
}

public interface ICalculations
{
    decimal CalculatePercent();
    decimal Payment();
}

public interface IClientActions
{
    void ShowClientCredit(string fullName);
    void PayCredit(Client client, decimal money);
    void ShowAllCredit();
}