namespace BankManagement.Bank;

public class Bank
{
    public List<Client> clients;
    
    public Bank() => this.clients = new List<Client>();
    public Client CheckPin(string PIN)
    {
        foreach (var client in this.clients)
        {
            if (client.Card.Pin == PIN)
                return client;
        }
        throw new Exception("Fin Not Found!");
    }
    public void addClient(Client newClient)
    {
        foreach (var client in this.clients)
        {
            if (client.Card.Pan == newClient.Card.Pan || client.Card.Pin == newClient.Card.Pin || client.Card.Ccv == newClient.Card.Ccv)
                throw new Exception("Wrong Pan, Ccv, Pin!");
        }
        this.clients.Add(newClient);
    }
    
    public static string getEncryptedText()
    {
        string input = "";
        ConsoleKeyInfo key;

        while ((key = Console.ReadKey(true)).Key != ConsoleKey.Enter)
        {
            if (key.Key == ConsoleKey.Backspace && input.Length > 0)
            {
                input = input.Substring(0, input.Length - 1);
                Console.Write("\b \b");
            }
            else if (!char.IsControl(key.KeyChar))
            {
                input += key.KeyChar;
                Console.Write("*");
            }
        }
        Console.WriteLine();
        return input;
    }
    
    public static void cardToCard(Bank bank, Client currentClient, string PAN, double amount)
    {
        if (currentClient.Card.balance < amount)
            throw new Exception("Your balance is not enough");
        foreach (var client in bank.clients)
        {
            if (client.Card.Pan == PAN)
            {
                currentClient.Card.balance -= amount;
                client.Card.balance += amount;
                Transaction transactionClient = new($"From: You\nTo: {PAN}\nBalance -= {amount}\nCurrent Balance: {currentClient.Card.balance}");
                Transaction transactionPAN = new($"From: {currentClient.Card.Pan}\nTo: You\nBalance += {amount}\n Current Balance: {client.Card.balance}");
                currentClient.transactions.Add(transactionClient);
                client.transactions.Add(transactionPAN);
                return;
            }
        }
        throw new Exception("Wrong Pan!");
    }

}