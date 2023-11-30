using System;

interface IDataSource
{
    void WriteData(string data);
    string ReadData();
}

class FileDataSource : IDataSource
{
    private string filename;

    public FileDataSource(string filename)
    {
        this.filename = filename;
    }

    public void WriteData(string data)
    {
        Console.WriteLine("Writing data to file");
    }

    public string ReadData()
    {
        return "Reading data from file";
    }
}


abstract class DataSourceDecorator : IDataSource
{
    protected IDataSource wrappee;

    public DataSourceDecorator(IDataSource source)
    {
        wrappee = source;
    }

    public virtual void WriteData(string data)
    {
        wrappee.WriteData(data);
    }

    public virtual string ReadData()
    {
        return wrappee.ReadData();
    }
}

class EncryptionDecorator : DataSourceDecorator
{
    public EncryptionDecorator(IDataSource source) : base(source) { }

    public override void WriteData(string data)
    {
        wrappee.WriteData("Encrypted");
    }

    public override string ReadData()
    {
        return wrappee.ReadData();
    }
}

class CompressionDecorator : DataSourceDecorator
{
    public CompressionDecorator(IDataSource source) : base(source) { }

    public override void WriteData(string data)
    {
        wrappee.WriteData("Compressed");
    }

    public override string ReadData()
    {
        return wrappee.ReadData();
    }
}

class Program
{
    static void Main()
    {
        IDataSource fileDataSource = new FileDataSource("text.txt");
        fileDataSource = new EncryptionDecorator(fileDataSource);
        fileDataSource = new CompressionDecorator(fileDataSource);

        fileDataSource.WriteData("Decorator");
        string readData = fileDataSource.ReadData();
        Console.WriteLine($"Read data: {readData}");
    }
}