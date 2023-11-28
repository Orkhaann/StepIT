using System;

namespace MyNamespace
{
    public class MyClass
    {
        private string input;

        public MyClass(string input)
        {
            this.input = input;
        }

        public void Space(string str)
        {
            string spacedString = string.Join("_", str.ToCharArray());
            Console.WriteLine(spacedString);
        }

        public void Reverse(string str)
        {
            char[] charArray = str.ToCharArray();
            Array.Reverse(charArray);
            string reversedString = new string(charArray);
            Console.WriteLine(reversedString);
        }
    }
}