// Define a class to represent a bank account.Include the following members : Data members : -Name of depositor, Account number, Type of account, Balance amount in the account Member functions : -To assign initial values, To deposit an amount, To withdraw an amount after checking the balance, To display name &balance Write a main program to test program using class and object.
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string depositorName;
    long accountNumber;
    char accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount() {}

    void initializeAccount()
    {
        cout << "Enter name of depositor: ";
        getline(cin, depositorName);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter type of account (S for Savings, C for Checking): ";
        cin >> accountType;

        cout << "Enter initial balance amount: ";
        cin >> balance;
    }

    // Function to deposit an amount
    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    // Function to withdraw an amount after checking the balance
    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "Name of depositor: " << depositorName << endl;
        cout << "Balance amount: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    account.initializeAccount();

    // Testing deposit function
    account.deposit();

    // Testing withdraw function
    account.withdraw();

    // Displaying account details
    account.display();

    return 0;
}
