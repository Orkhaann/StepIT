using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ISP_Before
{
    interface IWorker
    {
        void Work();
        void Eat();
    }

    class SuperWorker : IWorker
    {
        public void Work()
        {
            Console.WriteLine("SuperWorker is working more.");
        }

        public void Eat()
        {
            Console.WriteLine("SuperWorker is eating faster.");
        }
    }
}

namespace ISP_After
{
    interface IWorkable
    {
        void Work();
    }

    interface IEatable
    {
        void Eat();
    }

    class Worker : IWorkable, IEatable
    {
        public void Work()
        {
            Console.WriteLine("Worker is working.");
        }

        public void Eat()
        {
            Console.WriteLine("Worker is eating.");
        }
    }
}