namespace Task3
{
    public partial class Calculator : Form
    {

        double firstNumber = 0;
        string operation = "";

        public Calculator()
        {
            InitializeComponent();
        }

        private void ZeroBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "0";
        }

        private void OneBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "1";
        }

        private void TwoBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "2";
        }

        private void ThreeBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "3";
        }

        private void FourBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "4";
        }

        private void FiveBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "5";
        }

        private void SixBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "6";
        }

        private void SevenBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "7";
        }

        private void EightBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "8";
        }

        private void NineBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Text += "9";
        }

        private void DevideBtn_Click(object sender, EventArgs e)
        {
            operation = "/";
            firstNumber = double.Parse(InputTextBox.Text);
            InputTextBox.Clear();
        }

        private void MultpyBtn_Click(object sender, EventArgs e)
        {
            operation = "*";
            firstNumber = double.Parse(InputTextBox.Text);
            InputTextBox.Clear();
        }

        private void MinusBtn_Click(object sender, EventArgs e)
        {
            operation = "-";
            firstNumber = double.Parse(InputTextBox.Text);
            InputTextBox.Clear();
        }

        private void PlusBtn_Click(object sender, EventArgs e)
        {
            operation = "+";
            firstNumber = double.Parse(InputTextBox.Text);
            InputTextBox.Clear();
        }

        private void EqualBtn_Click(object sender, EventArgs e)
        {
            double secondNumber = double.Parse(InputTextBox.Text);
            double result = 0;

            switch (operation)
            {
                case "+":
                    result = firstNumber + secondNumber;
                    break;
                case "-":
                    result = firstNumber - secondNumber;
                    break;
                case "*":
                    result = firstNumber * secondNumber;
                    break;
                case "/":
                    if (secondNumber != 0)
                    {
                        result = firstNumber / secondNumber;
                    }
                    else
                    {
                        MessageBox.Show("Can't Devide 0!", "Division Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    break;
            }

            InputTextBox.Text = result.ToString();
        }

        private void DotBtn_Click(object sender, EventArgs e)
        {
            if (!InputTextBox.Text.Contains("."))
            {
                InputTextBox.Text += ".";
            }
        }

        private void CBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Clear();
        }

        private void CEBtn_Click(object sender, EventArgs e)
        {
            InputTextBox.Clear();
            firstNumber = 0;
            operation = "";
        }

        private void PercentBtn_Click(object sender, EventArgs e)
        {
            double secondNumber = double.Parse(InputTextBox.Text);
            double result = firstNumber * (secondNumber / 100);
            InputTextBox.Text = result.ToString();
        }

        private void DelBtn_Click(object sender, EventArgs e)
        {
            if (InputTextBox.Text.Length > 0)
            {
                InputTextBox.Text = InputTextBox.Text.Substring(0, InputTextBox.Text.Length - 1);
            }
        }

        private void SquaresBtn_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(InputTextBox.Text))
            {
                double number = double.Parse(InputTextBox.Text);
                double result = number * number;
                InputTextBox.Text = result.ToString();
            }
        }

        private void RootBtn_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(InputTextBox.Text))
            {
                double number = double.Parse(InputTextBox.Text);

                if (number >= 0)
                {
                    double result = Math.Sqrt(number);
                    InputTextBox.Text = result.ToString();
                }
                else
                {
                    MessageBox.Show("Negative numbers don't have real square roots.", "Invalid Input", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void NegateBtn_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(InputTextBox.Text))
            {
                double number = double.Parse(InputTextBox.Text);
                number = -number;

                InputTextBox.Text = number.ToString();
            }
        }

        private void OneDevideXBtn_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(InputTextBox.Text))
            {
                double number = double.Parse(InputTextBox.Text);

                if (number != 0)
                {
                    double result = 1 / number;
                    InputTextBox.Text = result.ToString();
                }
                else
                {
                    MessageBox.Show("Can't Devide 0!", "Division Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }
    }
}