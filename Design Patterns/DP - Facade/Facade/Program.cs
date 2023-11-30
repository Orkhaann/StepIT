using System;
class HardwareSystem
{
    public void PowerOn()
    {
        Console.WriteLine("Hardware: Power on");
    }
}

class OperatingSystem
{
    public void Boot()
    {
        Console.WriteLine("Operating System: Booting");
    }
}

class DeviceDrivers
{
    public void InitializeDrivers()
    {
        Console.WriteLine("Device Drivers: Initializing");
    }
}

class StartupFacade
{
    private HardwareSystem hardware;
    private OperatingSystem operatingSystem;
    private DeviceDrivers drivers;

    public StartupFacade()
    {
        hardware = new HardwareSystem();
        operatingSystem = new OperatingSystem();
        drivers = new DeviceDrivers();
    }

    public void StartComputer()
    {
        hardware.PowerOn();
        operatingSystem.Boot();
        drivers.InitializeDrivers();
    }
}

class Program
{
    static void Main()
    {
        StartupFacade startupFacade = new StartupFacade();
        startupFacade.StartComputer();
    }
}