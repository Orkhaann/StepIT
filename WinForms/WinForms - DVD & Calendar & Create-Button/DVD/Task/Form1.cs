namespace Task
{
    public partial class DVD : Form
    {
        public DVD()
        {
            InitializeComponent();
        }

        private void DVDLabel_MouseEnter(object sender, EventArgs e)
        {
            int maxX = this.ClientSize.Width - DVDLabel.Width;
            int maxY = this.ClientSize.Height - DVDLabel.Height;

            Random random = new Random();
            int x = random.Next(0, maxX);
            int y = random.Next(0, maxY);
            RandomColor(random);

            DVDLabel.Location = new Point(x, y);
        }
        private void RandomColor(Random random)
        {
            int red = random.Next(0, 256);
            int green = random.Next(0, 256);
            int blue = random.Next(0, 256);

            DVDLabel.ForeColor = Color.FromArgb(red, green, blue);
        }
    }
}