using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main()
        {
            while (true)
            {
                Console.WriteLine("1. Plus");
                Console.WriteLine("2. Minus");
                Console.WriteLine("3. Multiply");
                Console.WriteLine("4. Divide");
                Console.Write("Enter Choice: ");

                int choice = Convert.ToInt32(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        Console.Write("Enter Num1: ");
                        double num1 = Convert.ToDouble(Console.ReadLine());
                        Console.Write("Enter Num2: ");
                        double num2 = Convert.ToDouble(Console.ReadLine());
                        double plusResult = Calculator.Plus(num1, num2);
                        Console.WriteLine($"Result: {plusResult}");
                        break;
                    case 2:
                        Console.Write("Enter Num1: ");
                        num1 = Convert.ToDouble(Console.ReadLine());
                        Console.Write("Enter Num2: ");
                        num2 = Convert.ToDouble(Console.ReadLine());
                        double minusResult = Calculator.Minus(num1, num2);
                        Console.WriteLine($"Result: {minusResult}");
                        break;
                    case 3:
                        Console.Write("Enter Num1: ");
                        num1 = Convert.ToDouble(Console.ReadLine());
                        Console.Write("Enter Num2: ");
                        num2 = Convert.ToDouble(Console.ReadLine());
                        double multiplyResult = Calculator.Multiply(num1, num2);
                        Console.WriteLine($"Result: {multiplyResult}");
                        break;
                    case 4:
                        Console.Write("Enter Num1: ");
                        num1 = Convert.ToDouble(Console.ReadLine());
                        Console.Write("Enter Num2: ");
                        num2 = Convert.ToDouble(Console.ReadLine());
                        double divideResult = Calculator.Divide(num1, num2);
                        Console.WriteLine($"Result: {divideResult}");
                        break;
                    default:
                        Console.WriteLine("Invalid Choice!");
                        break;
                }
            }
        }
    }
}