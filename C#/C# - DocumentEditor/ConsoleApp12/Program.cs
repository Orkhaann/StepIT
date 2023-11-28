using System;

namespace DocumentEditor
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the type of document (basic, pro, expert):");
            string Type = Console.ReadLine();

            DocumentProgram docProgram;

            switch (Type.ToLower())
            {
                case "basic":
                    docProgram = new DocumentProgram();
                    break;
                case "pro":
                    docProgram = new ProDocumentProgram();
                    break;
                case "expert":
                    docProgram = new ExpertDocument();
                    break;
                default:
                    Console.WriteLine("Invalid document type");
                    return;
            }

            docProgram.OpenDocument();
            docProgram.EditDocument();
            docProgram.SaveDocument();
        }
    }
}
