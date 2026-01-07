#include <iostream>
#include <string>
using namespace std;

class BankingException {
    string message;
public:
    BankingException(string msg) : message(msg) {}
    string getMessage() { return message; }
};

class Banking {
    int accId;
    double balance;
public:
    void createAccount() {
        cout << "Enter Account ID: ";
        cin >> accId;
        cout << "Enter Initial Balance: ";
        cin >> balance;

        if (balance < 2000)
            throw BankingException("balance should be min 2000 and above");

        cout << "Account created successfully.\n";
    }

    void deposit() {
        double amount;
        cout << "Enter deposit amount: ";
        cin >> amount;

        if (amount < 0)
            throw BankingException("deposit value should not be negative value");

        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (balance - amount < 2000)
            throw BankingException("maintain minimum balance 2000");

        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
};

int main() {
    Banking account;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch(choice) {
                case 1: account.createAccount(); break;
                case 2: account.deposit(); break;
                case 3: account.withdraw(); break;
                case 4: break;
                default: throw BankingException("Invalid menu choice");
            }
        }
        catch (BankingException &e) {
            cout << "Exception: " << e.getMessage() << endl;
        }

    } while (choice != 4);

    cout << "Banking system exited." << endl;
    return 0;
}