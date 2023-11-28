using System;

namespace  DocumentEditor
{
    public class ExpertDocument : ProDocumentProgram
    {
        public override void SaveDocument()
        {
            Console.WriteLine("3. Document Saved in pdf format");
        }
    }
}