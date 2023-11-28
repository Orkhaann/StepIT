using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LSP_Before
{
    class Rectangle
    {
        public virtual int Width { get; set; }
        public virtual int Height { get; set; }
    }

    class Square : Rectangle
    {
        public override int Width
        {
            set { base.Width = base.Height = value; }
        }

        public override int Height
        {
            set { base.Width = base.Height = value; }
        }
    }
}

namespace LSP_After
{
    interface IShape
    {
        int GetArea();
    }

    class Rectangle : IShape
    {
        public int Width { get; set; }
        public int Height { get; set; }

        public int GetArea()
        {
            return Width * Height;
        }
    }

    class Square : IShape
    {
        public int Side { get; set; }

        public int GetArea()
        {
            return Side * Side;
        }
    }
}