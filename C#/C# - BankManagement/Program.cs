using BankManagement.Bank;
using BankManagement;

Bank NationalBankOfAzerbaijan = new Bank();

try
{
    NationalBankOfAzerbaijan.addClient(new Client("Orkhan", "Mammadli", 16, 1500, new BankCard(BankNames.KapitalBank, "Orkhan", "1234567890123456", "1234", "123", 10000)));
    NationalBankOfAzerbaijan.addClient(new Client("Ibrahim", "Panahli", 16, 2000, new BankCard(BankNames.BankRespublika, "Ibrahim", "1234556789012345", "4321", "321", 20000)));
    NationalBankOfAzerbaijan.addClient(new Client("Cavid", "Atamoglanov", 25, 2500, new BankCard(BankNames.UniBank, "Cavid", "1234512389012378", "9999", "990", 15000)));
}
catch (Exception ex)
{
    Console.WriteLine(ex.ToString());
}
StartUp.Start(NationalBankOfAzerbaijan);