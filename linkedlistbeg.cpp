#include <iostream>
#include <vector>
using namespace std;

class Account {
protected:
    int accountNumber;
    string customerName;
    string contactInfo;
    double balance;

public:
    Account(int accNo, string name, string contact, double bal) {
        accountNumber = accNo;
        customerName = name;
        contactInfo = contact;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void updateDetails(string newName, string newContact) {
        customerName = newName;
        contactInfo = newContact;
        cout << "Account details updated successfully.\n";
    }

    void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Contact Info: " << contactInfo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Bank : public Account {
public:
    Bank(int accNo, string name, string contact, double bal)
        : Account(accNo, name, contact, bal) {}
};

int main() {
    vector<Bank> accounts;
    int choice;

    while (true) {
        cout << "\n--- Banking Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Balance Inquiry\n";
        cout << "5. Update Account Details\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNo;
            string name, contact;
            double bal;

            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter Contact Info: ";
            cin >> contact;
            cout << "Enter Initial Balance: ";
            cin >> bal;

            accounts.push_back(Bank(accNo, name, contact, bal));
            cout << "Account Created Successfully!\n";
        }

        else if (choice >= 2 && choice <= 5) {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;

            bool found = false;
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].getAccountNumber() == accNo) {
                    found = true;

                    if (choice == 2) {
                        double amt;
                        cout << "Enter deposit amount: ";
                        cin >> amt;
                        accounts[i].deposit(amt);
                    }
                    else if (choice == 3) {
                        double amt;
                        cout << "Enter withdrawal amount: ";
                        cin >> amt;
                        accounts[i].withdraw(amt);
                    }
                    else if (choice == 4) {
                        accounts[i].displayBalance();
                    }
                    else if (choice == 5) {
                        string newName, newContact;
                        cout << "Enter new name: ";
                        cin >> newName;
                        cout << "Enter new contact info: ";
                        cin >> newContact;
                        accounts[i].updateDetails(newName, newContact);
                    }
                }
            }

            if (!found) {
                cout << "Account not found!\n";
            }
        }

        else if (choice == 6) {
            cout << "Thank you for using Banking System.\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
