using System;

public delegate void Func(string str);

namespace MyNamespace
{
    public class Program
    {
        public static void Main()
        {
            Console.WriteLine("Enter string:");
            var str = Console.ReadLine();

            MyClass cls = new MyClass(str);
        
            Func funcDell = cls.Space;
            funcDell += cls.Reverse;

            Run run = new Run();
            run.runFunc(funcDell, str);
        }
    }
}
