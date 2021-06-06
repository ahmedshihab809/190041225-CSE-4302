#include<iostream>
using namespace std;
class bank_account
{
private:
    string name;
    int account_number;
    string account_type;
    double balance=0;
public:
    void customerdetails(string customerName,int acc_number)
    {
        name=customerName;
        account_number=acc_number;
    }
    void accountType(string type)
    {
        account_type=type;
    }
    void Balance()
    {
        cout << "Balance is " << balance << endl;
    }
    void deposit(double input)
    {
        balance+=input;
        cout << "Final Balance is " << balance << endl;
    }
    void withdraw (double input)
    {
        if(input <=balance)
            balance-=input;
        else
            cout << "Balance too low to withdraw this amount!" << endl;
    }
    void display()
    {
        cout << "Customer Name : " << name <<  endl;
        cout << "Account Number : " << account_number << endl;
        cout << "Account Type : " << account_type << endl;
        cout << "Balance : " << balance << endl;
    }
};
int main()
{
    bank_account xyz;
    xyz.customerdetails("Shihab",190041225);
    xyz.accountType("Current");
    xyz.Balance();
    xyz.deposit(10000);
    xyz.withdraw(6500);
    xyz.display();
    return 0;
}
