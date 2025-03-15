#include <iostream>
using namespace std;

// Function to deposit money
double deposit(double balance, double amount) {
    return balance + amount;
}

// Function to withdraw money
double withdraw(double balance, double amount) {
    if (amount > balance) {
        cout << "Insufficient funds!" << endl;
        return balance;
    }
    return balance - amount;
}

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    while (true) {
        cout << "\nBanking System\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = deposit(balance, amount);
                cout << "Updated Balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                balance = withdraw(balance, amount);
                cout << "Updated Balance: $" << balance << endl;
                break;
            case 3:
                cout << "Current Balance: $" << balance << endl;
                break;
            case 4:
                cout << "Exiting Banking System.\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
