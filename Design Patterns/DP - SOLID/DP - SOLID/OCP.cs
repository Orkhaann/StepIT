using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OCP_Before
{
    public class Rectangle
    {
        public double Width { get; set; }
        public double Height { get; set; }
    }

    public class AreaCalculator
    {
        public double CalculateArea(Rectangle rectangle)
        {
            return rectangle.Width * rectangle.Height;
        }
    }
}

namespace OCP_After
{
    public abstract class Shape
    {
        public abstract double CalculateArea();
    }

    public class Rectangle : Shape
    {
        public double Width { get; set; }
        public double Height { get; set; }

        public override double CalculateArea()
        {
            return Width * Height;
        }
    }

    public class Circle : Shape
    {
        public double Radius { get; set; }

        public override double CalculateArea()
        {
            return 3.14 * Radius * Radius;
        }
    }
}