namespace Task
{
    public partial class Form1 : Form
    {
        static public int count = 1;
        public Point DownPoint;
        public Point UpPoint;
        public Form1()
        {
            InitializeComponent();
        }

        private void Program_MouseDown(object sender, MouseEventArgs e)
        {
            DownPoint = e.Location;
        }
        private bool IsSizeTooSmall(Point upPoint)
        {
            int minYSize = 5;

            return Math.Abs(upPoint.Y - DownPoint.Y) < minYSize;
        }

        private void Program_MouseUp(object sender, MouseEventArgs e)
        {
            if (IsSizeTooSmall(e.Location))
            {
                MessageBox.Show("Button size is too small.", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            CreateButton(e.Location);
        }

        private void CreateButton(Point upPoint)
        {
            Button button = new Button();
            button.Click += (s, e) =>
            {
                button.Text = "Location: " + button.Location.ToString();
            };

            button.AutoSize = true;
            button.Text = count++.ToString();
            int width = Math.Abs(upPoint.X - DownPoint.X);
            int height = Math.Abs(upPoint.Y - DownPoint.Y);
            button.Size = new Size(width, height);

            int x = Math.Min(DownPoint.X, upPoint.X);
            int y = Math.Min(DownPoint.Y, upPoint.Y);
            button.Location = new Point(x, y);

            button.BackColor = GetRandomColor();
            button.FlatStyle = FlatStyle.Flat;
            button.FlatAppearance.BorderSize = 0;

            Controls.Add(button);
        }

        private Color GetRandomColor()
        {
            Random random = new Random();
            return Color.FromArgb(random.Next(256), random.Next(256), random.Next(256));
        }
    }
}