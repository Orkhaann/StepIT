using BankManagement;
using BankManagement.Bank;
using BankManagement.Menus;
public class StartUp
{
    public static void Start(Bank bank)
    {
        while (true)
        {
            Console.Clear();
            Console.Write("Enter Pin: ");
            string? PIN = BankManagement.Bank.Bank.getEncryptedText();
            Client currentClient;
            try
            {
                currentClient = bank.CheckPin(PIN);
                Console.Clear();
                Console.WriteLine($"Welcome, Dear {currentClient?.Surname} {currentClient?.Name} ");
                Thread.Sleep(2000);
            }
            catch (Exception ex)
            {
                Console.Clear();
                Console.WriteLine(ex.ToString());
                Thread.Sleep(5000);
                continue;
            }
            MainMenu.Main(bank,currentClient);
        }
    }
}