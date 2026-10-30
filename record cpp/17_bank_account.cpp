#include <iostream>
#include <string>
using namespace std;

class BankAccount {

    int accountno;
    string name,acctype;
    double balance = 0;

    void readetails() {
        cout << "Enter acc no. : "; cin >> accountno;
        cout << "Enter name: "; cin>>name;
        cout << "Enter type: "; cin>>acctype;
        cout << "Enter opening balance: "; cin >> balance;
    }
public:
    void deposit(double amt) {
        if (amt > 0)
            balance += amt;
        else
            cout << "Invalid  amount ";
    }

    void withdraw(double amt) {
        if (amt <= 0)
            cout << "Invalid amount ";
        else if (balance - amt < 500)
            cout << "Withdrawal not allowed. Keep at least Rs. 500 in the account.\n";
        else
            balance -= amt;
    }

    void displayDetails() {
        cout << "Acc no: " << accountno <<endl;
        cout << "Name: " << name << endl;
        cout << "Account type: " << acc type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    double amount;
    account.readetails();

    cout << "Enter deposit : ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter withdrawal : ";
    cin >> amount;
    account.withdraw(amount);

    cout << "Account details:\n";
    account.displayDetails();
    return 0;
}