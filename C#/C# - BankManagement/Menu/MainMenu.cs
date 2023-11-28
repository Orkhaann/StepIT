using BankManagement.Bank;
namespace BankManagement.Menus;

public class MainMenu
{
    public static void Main(Bank.Bank bank, Client currentClient)
    {
        string[] menu = { "Balance", "Cash", "CardToCard", "Transactions", "Information" };
        int select_choice = 0;
        bool Ischeck = true;

        while (Ischeck)
        {
            Console.Clear();
            ForMenus.print_menu(menu, select_choice, "Select Please:");

            ConsoleKeyInfo keyInfo = Console.ReadKey(true);

            switch (keyInfo.Key)
            {
                case ConsoleKey.W:
                case ConsoleKey.UpArrow:
                    select_choice = (select_choice - 1 + menu.Length) % menu.Length;
                    break;
                case ConsoleKey.S:
                case ConsoleKey.DownArrow:
                    select_choice = (select_choice + 1) % menu.Length;
                    break;
                case ConsoleKey.Enter:
                    CardToCard(bank,menu[select_choice], currentClient);
                    Thread.Sleep(4000);
                    break;
                case ConsoleKey.Escape:
                    Ischeck = false;
                    break;
            }
        }
    }

    static void CardToCard(Bank.Bank bank,string chooice, Client currentClient)
    {
        Console.Clear();
        switch (chooice)
        {
            case "See Current Balance":
                ThirdMenu.Main(currentClient);
                break;
            case "Cash":
                try
                {
                    SecondMenu.Main(currentClient);
                }
                catch(Exception ex)
                {
                    Console.WriteLine(ex.ToString());
                }
                break;
            case "Card To Card":
                Console.Write("Enter Pan: ");
                string pan = Console.ReadLine();
                Console.Write("Enter The Amount Of Money: ");
                string? amount= Console.ReadLine();
                try
                {
                    BankManagement.Bank.Bank.cardToCard(bank, currentClient, pan, Convert.ToDouble(amount));
                    Console.Clear();
                    Console.WriteLine("Success!");
                }
                catch (Exception ex)
                {
                    Console.Clear();
                    Console.WriteLine(ex.ToString());
                }
                break;
            case "List of Transactions":
                Console.Clear();
                currentClient.showTransactions();
                break;
            case "About Me":
                Console.Clear();
                currentClient.showPersonalInformation();
                break;
        }
    }
}