using Task3.Properties;

namespace Task3
{
    public partial class Date : Form
    {
        private bool isLightMode = true;
        public Date()
        {
            InitializeComponent();
        }
        private void ToggleMode()
        {
            isLightMode = !isLightMode;
            if (isLightMode)
                SetLightMode();
            else
                SetDarkMode();
        }

        private void SetLightMode()
        {
            this.BackColor = System.Drawing.Color.White;
            TimeLabel.ForeColor = System.Drawing.Color.Black;
            ModeButton.BackgroundImage = Properties.Resources.moon;
            CalendarLabel.ForeColor = System.Drawing.Color.Black;
        }

        private void SetDarkMode()
        {
            this.BackColor = System.Drawing.Color.Black;
            TimeLabel.ForeColor = System.Drawing.Color.White;
            ModeButton.BackgroundImage = Properties.Resources.sun;
            CalendarLabel.ForeColor = System.Drawing.Color.White;
        }

        private void BakuBtn_Click(object sender, EventArgs e)
        {
            LondonTimer.Stop();
            TokyoTimer.Stop();
            NewYorkTimer.Stop();
            IstanbulTimer.Stop();
            ViennaTimer.Stop();
            ParisTimer.Stop();
            BakuTimer.Interval = 1000;
            BakuTimer.Tick += (s, e) =>
            {
                DateTime bakuTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("Azerbaijan Standard Time"));
                TimeLabel.Text = bakuTime.ToString("HH:mm:ss");
            };
            pictureBoxBackground.BackgroundImage = Resources.baku;
            BakuTimer.Start();
        }

        private void LondonBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            TokyoTimer.Stop();
            NewYorkTimer.Stop();
            IstanbulTimer.Stop();
            ViennaTimer.Stop();
            ParisTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.london;
            LondonTimer.Interval = 1000;
            LondonTimer.Tick += (s, e) =>
            {
                DateTime londonTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("GMT Standard Time"));
                TimeLabel.Text = londonTime.ToString("HH:mm:ss");
            };
            LondonTimer.Start();
        }

        private void TokyoBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            LondonTimer.Stop();
            NewYorkTimer.Stop();
            IstanbulTimer.Stop();
            ViennaTimer.Stop();
            ParisTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.tokyo;
            TokyoTimer.Interval = 1000;
            TokyoTimer.Tick += (s, e) =>
            {
                DateTime tokyoTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("Tokyo Standard Time"));
                TimeLabel.Text = tokyoTime.ToString("HH:mm:ss");
            };
            TokyoTimer.Start();
        }

        private void NewYorkBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            LondonTimer.Stop();
            TokyoTimer.Stop();
            IstanbulTimer.Stop();
            ViennaTimer.Stop();
            ParisTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.newyork;
            NewYorkTimer.Interval = 1000;
            NewYorkTimer.Tick += (s, e) =>
            {
                DateTime newYorkTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("Eastern Standard Time"));
                TimeLabel.Text = newYorkTime.ToString("HH:mm:ss");
            };
            NewYorkTimer.Start();
        }

        private void IstanbulBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            LondonTimer.Stop();
            TokyoTimer.Stop();
            NewYorkTimer.Stop();
            ViennaTimer.Stop();
            ParisTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.istanbul;
            IstanbulTimer.Interval = 1000;
            IstanbulTimer.Tick += (s, e) =>
            {
                DateTime istanbulTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("Turkey Standard Time"));
                TimeLabel.Text = istanbulTime.ToString("HH:mm:ss");
            };
            IstanbulTimer.Start();
        }

        private void ViennaBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            LondonTimer.Stop();
            TokyoTimer.Stop();
            NewYorkTimer.Stop();
            IstanbulTimer.Stop();
            ParisTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.vienna;
            ViennaTimer.Interval = 1000;
            ViennaTimer.Tick += (s, e) =>
            {
                DateTime viennaTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("Central Europe Standard Time"));
                TimeLabel.Text = viennaTime.ToString("HH:mm:ss");
            };
            ViennaTimer.Start();
        }

        private void ParisBtn_Click(object sender, EventArgs e)
        {
            BakuTimer.Stop();
            LondonTimer.Stop();
            TokyoTimer.Stop();
            NewYorkTimer.Stop();
            IstanbulTimer.Stop();
            ViennaTimer.Stop();
            pictureBoxBackground.BackgroundImage = Resources.paris;
            ParisTimer.Interval = 1000;
            ParisTimer.Tick += (s, e) =>
            {
                DateTime parisTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.FindSystemTimeZoneById("W. Europe Standard Time"));
                TimeLabel.Text = parisTime.ToString("HH:mm:ss");
            };

            ParisTimer.Start();
        }

        private void ModeButton_Click_1(object sender, EventArgs e)
        {
            ToggleMode();
        }
    }
}