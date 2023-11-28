using System;
using System.Diagnostics;
using System.Drawing;
using System.IO;

class Program
{
    static int count = 1;

    static void Main()
    {
        while (true)
        {
            Console.Clear();
            Console.WriteLine("Press Enter to capture the screen or End to view captured images.");

            switch (Console.ReadKey().Key)
            {
                case ConsoleKey.Enter:
                    CaptureScreen();
                    break;
                case ConsoleKey.End:
                    ShowCapturedImages();
                    break;
            }
        }
    }

    static void ShowCapturedImages()
    {
        string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
        string imageFolderPath = Path.Combine(desktopPath, "Imagefolder");

        if (!Directory.Exists(imageFolderPath))
        {
            Console.WriteLine("No captured images found.");
            return;
        }

        string[] imageFiles = Directory.GetFiles(imageFolderPath);

        if (imageFiles.Length == 0)
        {
            Console.WriteLine("No captured images found.");
            return;
        }

        foreach (var item in imageFiles)
        {
            Process.Start("mspaint.exe", item);
        }
    }

    static void CaptureScreen()
    {
        string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
        string imageFolderPath = Path.Combine(desktopPath, "ScreenShots");

        if (!Directory.Exists(imageFolderPath))
        {
            Directory.CreateDirectory(imageFolderPath);
        }

        using Bitmap sc = new Bitmap(1920, 1080);
        using Graphics gr = Graphics.FromImage(sc);
        gr.CopyFromScreen(0, 0, 0, 0, new Size(1920, 1080));

        sc.Save(Path.Combine(imageFolderPath, "Image" + count++ + ".png"));
    }
}