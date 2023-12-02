using System;
#nullable disable

interface IBuilder
{
    void reset();
    void setSeats(int number);
    void setEngine(string engine);
    void setTripComputer();
    void setGPS();
}
class Director
{
    public void makeSUV(IBuilder builder)
    {
        builder.reset();
        builder.setSeats(4);
        builder.setEngine("5.0");
        builder.setTripComputer();
        builder.setGPS();
    }

    public void makeSportsCar(IBuilder builder)
    {
        builder.reset();
        builder.setSeats(4);
        builder.setEngine("4.8");
        builder.setTripComputer();
        builder.setGPS();
    }
}

class CarBuilder : IBuilder
{

    private Car? car;

    public void reset()
    {
        this.car = new Car();
    }

    public void setEngine(string engine)
    {
        throw new NotImplementedException();
    }

    public void setGPS()
    {
        throw new NotImplementedException();
    }

    public void setSeats(int number)
    {
        throw new NotImplementedException();
    }

    public void setTripComputer()
    {
        throw new NotImplementedException();
    }

    public Car getResult()
    {
        return this.car;
    }
}


class CarManualBuilder : IBuilder
{

    private Manual manual;

    public void reset()
    {
        this.manual = new Manual();
    }

    public void setEngine(string engine)
    {
        throw new NotImplementedException();
    }

    public void setGPS()
    {
        throw new NotImplementedException();
    }

    public void setSeats(int number)
    {
        throw new NotImplementedException();
    }

    public void setTripComputer()
    {
        throw new NotImplementedException();
    }

    public Manual getResult()
    {
        return this.manual;
    }
}

class Manual : CarManualBuilder
{

}

class Car : CarBuilder
{

}

class Client
{
    public void Main()
    {
        Director director = new Director();
        CarBuilder builder = new CarBuilder();
        director.makeSportsCar(builder);
        Car car = builder.getResult();
    }
}