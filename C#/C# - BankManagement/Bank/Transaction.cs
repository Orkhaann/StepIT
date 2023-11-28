namespace BankManagement
{
    public class Transaction
    {
        public string Date_Time { get; set; }
        public string message { get; set; }
        public Transaction(string message)
        {
            this.message = message;
            this.Date_Time = DateTime.Now.ToString("dddd, dd MMMM yyyy HH:mm:ss");
        }

    }
}