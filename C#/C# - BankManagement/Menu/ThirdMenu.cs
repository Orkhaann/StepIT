namespace BankManagement.Menus;

internal class ThirdMenu
{
    public static void Main(Client currentClient)
    {
        string[] chooice = { "Dollar", "Manat", "Rubl", "Euro" };
        int select_choice = 0;
        bool Ischeck = true;

        while (Ischeck)
        {
            Console.Clear();
            ForMenus.print_menu(chooice, select_choice, "Show Balance With: ");

            ConsoleKeyInfo keyInfo = Console.ReadKey(true);

            switch (keyInfo.Key)
            {
                case ConsoleKey.W:
                case ConsoleKey.UpArrow:
                    select_choice = (select_choice - 1 + chooice.Length) % chooice.Length;
                    break;
                case ConsoleKey.S:
                case ConsoleKey.DownArrow:
                    select_choice = (select_choice + 1) % chooice.Length;
                    break;
                case ConsoleKey.Enter:
                    Excence(chooice[select_choice], currentClient);
                    Thread.Sleep(4000);
                    break;
                case ConsoleKey.Escape:
                    Ischeck = false;
                    break;
            }
        }
    }

    static void Excence(string chooice, Client currentClient)
    {
        Console.Clear();
        switch (chooice)
        {
            case "Dollar":
                Console.WriteLine($"Your Current Balance: {currentClient.Card.balance} Dollar");
                Thread.Sleep(3000);
                Main(currentClient);
                break;
            case "Manat":
                Console.WriteLine($"Your Current Balance: {currentClient.Card.balance * 1.7} Manat");
                Thread.Sleep(3000);
                Main(currentClient);
                break;
            case "Ruble":
                Console.WriteLine($"Your Current Balance: {currentClient.Card.balance * 98.3} Ruble");
                Thread.Sleep(3000);
                Main(currentClient);
                break;
            case "Euro":
                Console.WriteLine($"Your Current Balance: {currentClient.Card.balance / 0.93} Euro");
                Thread.Sleep(3000);
                Main(currentClient);
                break;
        }
    }
}