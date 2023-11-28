using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SRP_Before
{
    public class FileHandler
    {
        public void ReadFile(string filePath)
        {
            Console.WriteLine($"Reading file from path: {filePath}");
        }

        public void SaveFile(string filePath, string content)
        {
            File.WriteAllText(filePath, content);
            Console.WriteLine($"Content saved to file at path: {filePath}");
        }

        public void GenerateReport(string content)
        {
            Console.WriteLine($"Generating report with content: {content}");
        }
    }
}

namespace SRP_After
{
    public class FileHandler
    {
        public string ReadFile(string filePath)
        {
            Console.WriteLine($"Reading file from path: {filePath}");
            return File.ReadAllText(filePath);
        }

        public void SaveFile(string filePath, string content)
        {
            File.WriteAllText(filePath, content);
            Console.WriteLine($"Content saved to file at path: {filePath}");
        }
    }

    public class ReportGenerator
    {
        public void GenerateReport(string content)
        {
            Console.WriteLine($"Generating report with content: {content}");
        }
    }
}
