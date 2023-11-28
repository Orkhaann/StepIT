namespace Program;

public class Counter
{
    private int minValue { get; set; }
    private int maxValue { get; set; }
    private int currentValue { get; set; }
    
    public Counter(int min, int max)
    {
        this.minValue = min;
        this.maxValue = max;
        this.currentValue = min;
    }
    
    public void Increment()
    {
        this.currentValue++;
        if (this.currentValue > this.maxValue)
        {
            this.currentValue = this.minValue;
        }
    }
    
    public int GetCurrent()
    {
        return this.currentValue;
    }
}