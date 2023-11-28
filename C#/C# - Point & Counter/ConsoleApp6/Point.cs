namespace Program;

public class Point
{
    private int x { get; set; }
    private int y { get; set; }
    public Point(){}

    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    public void showData()
    {
        Console.WriteLine(this.x);
        Console.WriteLine(this.y);
    }
}