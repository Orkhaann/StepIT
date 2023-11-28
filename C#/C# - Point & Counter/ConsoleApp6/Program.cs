namespace Program
{
    public class Program
    {
        static void Main(string[] args)
        {

            Point p = new Point(4,3);
            p.showData();
            
            Counter c = new Counter(0, 100);
            c.Increment();
            Console.WriteLine(c.GetCurrent());

            c.Increment();
            Console.WriteLine(c.GetCurrent());
            
            Fraction fraction1 = new Fraction(1, 2);
            Fraction fraction2 = new Fraction(3, 4);
            
            fraction1.Add(fraction2);
            Console.WriteLine(fraction1);

            fraction1.Subtract(fraction2);
            Console.WriteLine(fraction1);

            fraction1.Multiply(fraction2);
            Console.WriteLine(fraction1);

            fraction1.Divide(fraction2);
            Console.WriteLine(fraction1);
        }
    }
}