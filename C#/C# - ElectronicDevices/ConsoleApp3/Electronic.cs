using System;

namespace FF
{
    interface Abilitys
    {
        double GetStorageSize();
        double Copy(double dataSize);
        double FreeMemory();
        void PrintDeviceInfo();
    }
    public class Storage
    {
        public string MediaType { get; set; }
        public string Model { get; set; }
    }

    public class DVD : Storage, Abilitys
    {
        public double ReadWriteSpeed { get; set; }
        public string Type { get; set; }

        public DVD(string model, double readWriteSpeed, string type)
        {
            MediaType = "DVD";
            Model = model;
            ReadWriteSpeed = readWriteSpeed;
            Type = type;
        }

        public double GetStorageSize()
        {
            if (Type == "Single")
                return 4.7 * 1024;
            else if (Type == "Double")
                return 9.0 * 1024;
            else
                return 0;
        }

        public double Copy(double dataSize)
        {
            double requiredMediaCount = dataSize / GetStorageSize();
            double timeRequired = requiredMediaCount / ReadWriteSpeed;

            return timeRequired;
        }

        public double FreeMemory()
        {
            return GetStorageSize();
        }

        public void PrintDeviceInfo()
        {
            Console.WriteLine($"Media Type: {MediaType}");
            Console.WriteLine($"Model: {Model}");
            Console.WriteLine($"Read/Write Speed: {ReadWriteSpeed} MB/s");
            Console.WriteLine($"Type: {Type}");
        }
    }

    public class Flash : Storage
    {
        public double USB30Speed { get; set; }
        public double Memory { get; set; }
    
        public Flash(string model, double usb30Speed, double memory)
        {
            MediaType = "Flash";
            Model = model;
            USB30Speed = usb30Speed;
            Memory = memory;
        }
    
        public double GetStorageSize()
        {
            return Memory;
        }
    
        public double Copy(double dataSize)
        {
            double requiredMediaCount = dataSize / Memory;
            double timeRequired = requiredMediaCount / USB30Speed;
    
            return timeRequired;
        }
    
        public double FreeMemory()
        {
            return Memory;
        }
    
        public void PrintDeviceInfo()
        {
            Console.WriteLine($"Media Type: {MediaType}");
            Console.WriteLine($"Model: {Model}");
            Console.WriteLine($"USB 3.0 Speed: {USB30Speed} MB/s");
            Console.WriteLine($"Memory: {Memory} MB");
        }
    }

    public class HDD : Storage
    {
        public double USB20Speed { get; set; }
        public double TotalSize { get; set; }

        public HDD(string model, double usb20Speed, double totalSize)
        {
            MediaType = "HDD";
            Model = model;
            USB20Speed = usb20Speed;
            TotalSize = totalSize;
        }

        public double GetStorageSize()
        {
            return TotalSize;
        }

        public double Copy(double dataSize)
        {
            double requiredMediaCount = dataSize / TotalSize;
            double timeRequired = requiredMediaCount / USB20Speed;

            return timeRequired;
        }

        public double FreeMemory()
        {
            return TotalSize;
        }

        public void PrintDeviceInfo()
        {
            Console.WriteLine($"Media Type: {MediaType}");
            Console.WriteLine($"Model: {Model}");
            Console.WriteLine($"USB 2.0 Speed: {USB20Speed} MB/s");
            Console.WriteLine($"Total Size: {TotalSize} MB");
        }
    }
}