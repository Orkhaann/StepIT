using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UML
{
    public interface ITarget
    {
        void Request();
    }

    public class Adaptee
    {
        public void SpecificRequest()
        {
            Console.WriteLine("Specific request");
        }
    }

    public class Adapter : ITarget
    {
        private Adaptee adaptee;

        public Adapter(Adaptee adaptee)
        {
            this.adaptee = adaptee;
        }

        public void Request()
        {
            adaptee.SpecificRequest();
        }
    }

    class Program
    {
        static void Main()
        {
            Adaptee adaptee = new Adaptee();
            ITarget target = new Adapter(adaptee);
            target.Request();

            Console.ReadLine();
        }
    }
}
