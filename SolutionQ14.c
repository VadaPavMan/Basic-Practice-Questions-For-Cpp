#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <string>
#include <limits>
#include <conio.h>
#include <cctype>
#include <cmath>
using namespace std;

// Ignore Above Header Files

// It's Just A Basic Not A Advanced One.

class bankaccoount
{
private:
    int accno;
    float balance = 0;

public:
    
    void setacc()
    {
        cout<<"Enter The Account Number To Set: ";
        cin>> accno;

        if(accno != NULL)
        {
            cout<<"Your Bank Account Number Is: "<< accno << endl;
        }
        else
        {
            cout<<"Something Went Wrong, Try Again Later."<< endl;
        }
    }

    void setbalance(float bal)
    {
        balance = bal;
    }

    void deposit(float add)
    {
        if (add <= 0.0)
        {
            cout << "Failded To Deposit. Try Again Later." << endl;
        }
        else
        {
            balance += add;
        }
    }

    void withdraw(float amount)
    {
        if(amount <= 0.0)
        {
            cout<<"Withdrawal Failded, Try Again Later."<< endl;
        }
        else if(amount > balance)
        {
            cout<<"Insufficient funds, Account Does Not Have The Sufficient Balance To Withdraw."<< endl;
        }
        else
        {
            balance -= amount;
            cout<<"Cash Withdrawal From A/C "<< accno <<"is successful. Rs. "<<amount<<"Debited."<< endl;
        }
    }
};

int main()
{
    float amount_to_deposit , amount_to_withdraw;
    bankaccoount ac[2];
    ac[1].setbalance(500.0);
    ac[1].setacc();
    cout<<"Enter The Amount To Deposit: ";
    cin >> amount_to_deposit;
    ac[1].deposit(amount_to_deposit);

    cout<<"Enter The Amount To Withdraw: ";
    cin >> amount_to_withdraw;
    ac[1].withdraw(amount_to_withdraw);
    return 0;
}
