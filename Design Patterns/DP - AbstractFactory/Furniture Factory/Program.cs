namespace FurnitureFactory
{
    
    public interface IChair
    {
        IChair creatChair();
    }
    public interface ISofa
    {
        ISofa creatSofa();
    }
    public interface ICoffeeTable
    {
        ICoffeeTable creatCoffeeTable();
    }

    public class ChairModern : IChair
    {
        public IChair creatChair() => new ChairModern();
    }

    public class ChairVictorina : IChair
    {
        public IChair creatChair() => new ChairVictorina();
    }

    public class SofaModern : ISofa
    {
        public ISofa creatSofa() => new SofaModern();
    }

    public class SofaVictorina : ISofa
    {
        public ISofa creatSofa() => new SofaVictorina();
    }

    public class CoffeeTableModern : ICoffeeTable
    {
        public ICoffeeTable creatCoffeeTable() => new CoffeeTableModern();
    }
    public class CoffeeTableVictorina : ICoffeeTable
    {
        public ICoffeeTable creatCoffeeTable() => new CoffeeTableVictorina();
    }
    public class Furniture
    {
        public Furniture(IChair chair, ISofa sofa, ICoffeeTable coffeetable)
        {
            _chair = chair;
            _sofa = sofa;
            _coffeetable = coffeetable;
        }

        public IChair _chair;
        public ISofa _sofa;
        public ICoffeeTable _coffeetable;
    }
}