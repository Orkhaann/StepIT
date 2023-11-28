using System;

namespace Bank
{
    public class Program
    {
        static void Main(string[] args)
        {
            Client client = new Client(1, "Orkhan", "Mammadli", 16, "Baku", "Dernagul", 2000);
            Manager manager = new Manager(1, "Ibrahim", "Alizada", 30, 3000);
            CEO ceo = new CEO(1, "Ibrahim", "Penahli", 40, 4000);
            
            manager.Organize();
            ceo.Organize();
        }
    }
}   