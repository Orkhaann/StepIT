namespace Bank;

public class Credit : ICalculations
{
    public int Id { get; set; }
    public Client Client { get; set; }
    public decimal Amount { get; set; }
    public decimal Percent { get; set; }
    public int Months { get; set; }

    public Credit(int id, Client client, decimal amount, decimal percent, int months)
    {
        Id = id;
        Client = client;
        Amount = amount;
        Percent = percent;
        Months = months;
    }

    public decimal CalculatePercent()
    {
        return Amount * (Percent / 100);
    }

    public decimal Payment()
    {
        return Amount / Months;
    }
}