using System;

namespace DocumentEditor
{
    public class DocumentProgram
    {
        public void OpenDocument()
        {
            Console.WriteLine("1. Document Opened");
        }

        public virtual void EditDocument()
        {
            Console.WriteLine("2. Can Edit in Pro and Expert versions");
        }

        public virtual void SaveDocument()
        {
            Console.WriteLine("3. Can Save in Pro and Expert versions");
        }
    }
}