using System;

interface IState
{
    void Handle(Context context);
}

class ConcreteStateA : IState
{
    public void Handle(Context context)
    {
        Console.WriteLine("State A is handling the request.");
        context.State = new ConcreteStateB();
    }
}

class ConcreteStateB : IState
{
    public void Handle(Context context)
    {
        Console.WriteLine("State B is handling the request.");
        context.State = new ConcreteStateA();
    }
}

class Context
{
    public IState State { get; set; }

    public Context(IState state)
    {
        State = state;
    }

    public void Request()
    {
        State.Handle(this);
    }
}