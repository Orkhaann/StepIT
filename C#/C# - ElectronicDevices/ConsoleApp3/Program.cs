using System;

namespace FF
{
    class Program
    {
        static void Main(string[] args)
        {
            DVD dvd = new DVD("SONY DVD", 8.0, "Double");
            Flash flash = new Flash("KingStone Flash", 120.0, 256.0);
            HDD hdd = new HDD("Samsung HDD", 60.0, 2048.0);

            double dataSize = 565 * 1024;

            Console.WriteLine("DVD:");
            dvd.PrintDeviceInfo();
            Console.WriteLine($"Copy Time: {dvd.Copy(dataSize)} hours");
            Console.WriteLine($"Free Memory: {dvd.FreeMemory()} MB");

            Console.WriteLine("\nFlash:");
            flash.PrintDeviceInfo();
            Console.WriteLine($"Copy Time: {flash.Copy(dataSize)} hours");
            Console.WriteLine($"Free Memory: {flash.FreeMemory()} MB");

            Console.WriteLine("\nHDD:");
            hdd.PrintDeviceInfo();
            Console.WriteLine($"Copy Time: {hdd.Copy(dataSize)} hours");
            Console.WriteLine($"Free Memory: {hdd.FreeMemory()} MB");
        }
    }
}