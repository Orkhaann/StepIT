using System;

namespace MyNamespace
{
    public class Run
    {
        public void runFunc(Func func, string str)
        {
            func(str);
        }
    }
}