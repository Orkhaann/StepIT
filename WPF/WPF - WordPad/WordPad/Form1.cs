using System.Reflection;
using System.Windows.Forms;

namespace WordPad
{
    public partial class WordPad : Form
    {
        public WordPad()
        {
            InitializeComponent();
        }

        private void ColorComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (ColorComboBox.SelectedItem != null)
            {
                string selectedColorName = ColorComboBox.SelectedItem.ToString();
                Color selectedColor = Color.FromName(selectedColorName);
                MainTextBox.SelectionColor = selectedColor;
            }
        }

        private void SizeComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

            if (SizeComboBox.SelectedItem != null)
            {
                float fontSize;
                if (float.TryParse(SizeComboBox.SelectedItem.ToString(), out fontSize))
                    MainTextBox.SelectionFont = new Font(MainTextBox.Font.FontFamily, fontSize);
            }
        }

        private void BoldBtn_Click(object sender, EventArgs e)
        {
            Font currentFont = MainTextBox.SelectionFont;
            FontStyle newStyle = currentFont.Style ^ FontStyle.Bold;
            MainTextBox.SelectionFont = new Font(currentFont, newStyle);
        }

        private void UnderlineBtn_Click(object sender, EventArgs e)
        {
            Font currentFont = MainTextBox.SelectionFont;
            FontStyle newStyle = currentFont.Style ^ FontStyle.Underline;
            MainTextBox.SelectionFont = new Font(currentFont, newStyle);
        }

        private void ItalicBtn_Click(object sender, EventArgs e)
        {
            Font currentFont = MainTextBox.SelectionFont;
            FontStyle newStyle = currentFont.Style ^ FontStyle.Italic;
            MainTextBox.SelectionFont = new Font(currentFont, newStyle);
        }

        private void LeftAlignBtn_Click(object sender, EventArgs e)
        {
            MainTextBox.SelectionAlignment = HorizontalAlignment.Left;
        }

        private void CenterAlignBtn_Click(object sender, EventArgs e)
        {
            MainTextBox.SelectionAlignment = HorizontalAlignment.Center;
        }

        private void RightAlignBtn_Click(object sender, EventArgs e)
        {
            MainTextBox.SelectionAlignment = HorizontalAlignment.Right;
        }

        private void FontComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (FontComboBox.SelectedItem != null)
            {
                string selectedFont = FontComboBox.SelectedItem.ToString();
                MainTextBox.SelectionFont = new Font(selectedFont, MainTextBox.SelectionFont.Size);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            foreach (var font in FontFamily.Families)
                FontComboBox.Items.Add(font.Name);
            FontComboBox.Text = FontComboBox.Items[0].ToString();

            for (int i = 8; i < 100; i++)
                SizeComboBox.Items.Add(i);
            SizeComboBox.Text = SizeComboBox.Items[0].ToString();

            foreach (PropertyInfo property in typeof(SystemColors).GetProperties())
            {
                if (property.PropertyType == typeof(Color))
                {
                    Color color = (Color)property.GetValue(null, null);
                    ColorComboBox.Items.Add(property.Name);
                }
            }
            ColorComboBox.Text = ColorComboBox.Items[0].ToString();
            LoadTextBox.Text = "Enter name and load file";
            SaveTextBox.Text = "Tap To enter name and save";
        }

        private void SaveBtn_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();

            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                string fileName = saveFileDialog1.FileName;
                File.WriteAllText(fileName, MainTextBox.Text);
            }
        }

        private void LoadBtn_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                string fileName = openFileDialog1.FileName;
                MainTextBox.Text = File.ReadAllText(fileName);
            }
        }
    }
}