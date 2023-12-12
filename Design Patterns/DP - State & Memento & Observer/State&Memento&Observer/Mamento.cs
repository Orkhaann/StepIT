using System;

class Originator
{
    private string state;

    public string State
    {
        get => state;
        set
        {
            Console.WriteLine($"Setting state to: {value}");
            state = value;
        }
    }

    public Memento SaveState()
    {
        Console.WriteLine("Saving state...");
        return new Memento(state);
    }

    public void RestoreState(Memento memento)
    {
        state = memento.State;
        Console.WriteLine($"Restoring state to: {state}");
    }
}

class Memento
{
    public string State { get; }

    public Memento(string state)
    {
        State = state;
    }
}

class Caretaker
{
    public Memento Memento { get; set; }
}