namespace BankManagement.Menus;

public class SecondMenu
{
    private static void check(Client currentClient, double cash)
    {
        if (cash <= currentClient.Card.balance && cash > 0)
        {
            Console.Clear();
            currentClient.Card.balance -= cash;
            Transaction transaction = new($"Balance: {currentClient.Card.balance}");
            currentClient.transactions.Add(transaction);
            Console.WriteLine($"{cash}$ WithDrawed");
        }
        else
            throw new Exception("You Don't have Money");
    }

    public static void Main(Client current_client)
    {
        string[] menu = { "10$", "20$" ,"50$", "100$", "Other"};
        int chooice = 0;
        bool Ischeck = true;

        while (Ischeck)
        {
            Console.Clear();
            ForMenus.print_menu(menu, chooice, "Select Please:");

            ConsoleKeyInfo keyInfo = Console.ReadKey(true);

            switch (keyInfo.Key)
            {
                case ConsoleKey.W:
                case ConsoleKey.UpArrow:
                    chooice = (chooice - 1 + menu.Length) % menu.Length;
                    break;
                case ConsoleKey.S:
                case ConsoleKey.DownArrow:
                    chooice = (chooice + 1) % menu.Length;
                    break;
                case ConsoleKey.Enter:
                    start_operation(menu[chooice], current_client);
                    Thread.Sleep(4000);
                    break;
                case ConsoleKey.Escape:
                    Ischeck = false;
                    break;
            }
        }
    }

    static void start_operation(string chooice, Client currentClient)
    {
        Console.Clear();
        switch (chooice)
        {
            case "10$":
                check(currentClient, 10);
                break;
            case "20$":
                check(currentClient, 20);
                break;
            case "50$":
                check(currentClient, 50);
                break;
            case "100$":
                check(currentClient, 100);
                break;
            case "Other":
                Console.Clear();
                Console.Write("Enter Balance: ");
                string? cash = Console.ReadLine();
                check(currentClient, Convert.ToInt32(cash));
                break;
        }
        Console.ReadKey(true);
    }
}