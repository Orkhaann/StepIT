using System;

namespace DocumentEditor
{
    public class ProDocumentProgram : DocumentProgram
    {
        public sealed override void EditDocument()
        {
            Console.WriteLine("2. Document Edited");
        }

        public override void SaveDocument()
        {
            Console.WriteLine("3. Document Saved in doc format, for pdf format buy Expert packet");
        }
    }
}