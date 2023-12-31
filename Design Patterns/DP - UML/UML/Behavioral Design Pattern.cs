﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UML
{
    public class Subject
    {
        private List<IObserver> observers = new List<IObserver>();
        private int state;

        public int State
        {
            get { return state; }
            set
            {
                state = value;
                Notify();
            }
        }

        public void Attach(IObserver observer)
        {
            observers.Add(observer);
        }

        public void Notify()
        {
            foreach (IObserver observer in observers)
            {
                observer.Update();
            }
        }
    }

    public interface IObserver
    {
        void Update();
    }

    public class ConcreteObserver : IObserver
    {
        private string name;
        private Subject subject;

        public ConcreteObserver(string name, Subject subject)
        {
            this.name = name;
            this.subject = subject;
        }

        public void Update()
        {
            Console.WriteLine($"Observer {name} is notified with state: {subject.State}");
        }
    }

    class Program
    {
        static void Main()
        {
            Subject subject = new Subject();

            ConcreteObserver observer1 = new ConcreteObserver("Observer 1", subject);
            ConcreteObserver observer2 = new ConcreteObserver("Observer 2", subject);

            subject.Attach(observer1);
            subject.Attach(observer2);

            subject.State = 10;

            Console.ReadLine();
        }
    }
}
