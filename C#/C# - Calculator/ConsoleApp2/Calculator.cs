namespace ConsoleApp2
{
    class Calculator
    {
        public static double Plus(double num1, double num2)
        {
            return num1 + num2;
        }

        public static double Minus(double num1, double num2)
        {
            return num1 - num2;
        }

        public static double Multiply(double num1, double num2)
        {
            return num1 * num2;
        }

        public static double Divide(double num1, double num2)
        {
            if (num2 == 0)
            {
                Console.WriteLine("Cannot Divide by 0!");
                return 0;
            }
            return num1 / num2;
        }
    }
}