#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string depositorName;
    string accountType;
    double balance;

    void readDetails() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter depositor name: ";
        getline(cin >> ws, depositorName);
        cout << "Enter account type: ";
        getline(cin, accountType);
        cout << "Enter opening balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount.\n";
    }

    void withdraw(double amount) {
        if (amount <= 0)
            cout << "Invalid withdrawal amount.\n";
        else if (balance - amount < 500)
            cout << "Withdrawal not allowed. Keep at least Rs. 500 in the account.\n";
        else
            balance -= amount;
    }

    void displayDetails() {
        cout << "Account number: " << accountNumber << "\n";
        cout << "Depositor name: " << depositorName << "\n";
        cout << "Account type: " << accountType << "\n";
        cout << "Balance: Rs. " << balance << "\n";
    }
};

int main() {
    BankAccount account;
    double amount;
    account.readDetails();

    cout << "Enter deposit amount: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);

    cout << "\nAccount details:\n";
    account.displayDetails();
    return 0;
}