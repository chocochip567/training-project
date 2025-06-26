#include <iostream>
using namespace std;

// Global variables for simplicity
float balance = 1000.0; // Initial balance

void showMenu() {
    cout << "\n========= ATM MENU =========" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "============================" << endl;
}

void checkBalance() {
    cout << "\nYour current balance is: $" << balance << endl;
}

void depositMoney() {
    float amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposited successfully!" << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

void withdrawMoney() {
    float amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;

    if (amount <= balance && amount > 0) {
        balance -= amount;
        cout << "Withdrawal successful!" << endl;
    } else {
        cout << "Insufficient balance or invalid amount." << endl;
    }
}

int main() {
    int choice;

    do {
        showMenu();
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;