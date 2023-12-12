using System;
using System.Collections.Generic;

// Subject arayüzü
interface ISubject
{
    void RegisterObserver(IObserver observer);
    void RemoveObserver(IObserver observer);
    void NotifyObservers();
}

interface IObserver
{
    void Update(string message);
}

class ConcreteSubject : ISubject
{
    private List<IObserver> observers = new List<IObserver>();
    private string message;

    public void RegisterObserver(IObserver observer)
    {
        observers.Add(observer);
    }

    public void RemoveObserver(IObserver observer)
    {
        observers.Remove(observer);
    }

    public void NotifyObservers()
    {
        foreach (var observer in observers)
        {
            observer.Update(message);
        }
    }

    public void SetMessage(string message)
    {
        this.message = message;
        NotifyObservers();
    }
}

class ConcreteObserver : IObserver
{
    private string name;

    public ConcreteObserver(string name)
    {
        this.name = name;
    }

    public void Update(string message)
    {
        Console.WriteLine($"{name} received message: {message}");
    }
}