class Program
{
    static void Main()
    {
        Context context = new Context(new ConcreteStateA());

        context.Request();
        context.Request();

        Console.ReadLine();



        Originator originator = new Originator();
        Caretaker caretaker = new Caretaker();

        originator.State = "St 1";
        caretaker.Memento = originator.SaveState();

        originator.State = "St 2";

        originator.RestoreState(caretaker.Memento);

        Console.ReadLine();



        ConcreteSubject subject = new ConcreteSubject();

        ConcreteObserver observer1 = new ConcreteObserver("Obs 1");
        ConcreteObserver observer2 = new ConcreteObserver("Obs 2");

        subject.RegisterObserver(observer1);
        subject.RegisterObserver(observer2);

        subject.SetMessage("Salam!");

        subject.RemoveObserver(observer1);

        subject.SetMessage("Only Obs 2 should receive this message.");

        Console.ReadLine();
    }
}