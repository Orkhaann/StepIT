using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UML
{
    public class Singleton
    {
        private static Singleton instance;

        private Singleton() { }

        public static Singleton Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new Singleton();
                }
                return instance;
            }
        }

        public void PrintMessage()
        {
            Console.WriteLine("Singleton instance is created.");
        }
    }

    class Program
    {
        static void Main()
        {
            Singleton obj1 = Singleton.Instance;
            obj1.PrintMessage();

            Singleton obj2 = Singleton.Instance;
            obj2.PrintMessage();

            Console.ReadLine();
        }
    }
}
