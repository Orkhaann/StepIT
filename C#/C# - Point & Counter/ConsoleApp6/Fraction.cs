namespace Program;

public class Fraction
{
    private int numerator { get; set; }
    private int denominator { get; set; }

    public Fraction(int numerator, int denominator)
    {
        this.numerator = numerator;
        this.denominator = denominator;
    }

    public void Simplify()
    {
        int ekob = Ekob(numerator, denominator);
        numerator /= ekob;
        denominator /= ekob;
    }

    private int Ekob(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public void Add(Fraction other)
    {
        numerator = (numerator * other.denominator) + (other.numerator * denominator);
        denominator *= other.denominator;
    }

    public void Subtract(Fraction other)
    {
        numerator = (numerator * other.denominator) - (other.numerator * denominator);
        denominator *= other.denominator;
    }

    public void Multiply(Fraction other)
    {
        numerator *= other.numerator;
        denominator *= other.denominator;
    }

    public void Divide(Fraction other)
    {
        if (other.numerator == 0)
        {
            throw new DivideByZeroException("You Can't Devide 0");
        }

        numerator *= other.denominator;
        denominator *= other.numerator;
    }

    public override string ToString()
    {
        if (denominator == 1)
        {
            return numerator.ToString();
        }
        return numerator + "/" + denominator;
    }
}