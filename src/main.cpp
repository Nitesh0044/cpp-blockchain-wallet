#include <iostream>
using namespace std;

int main() {
    // We use double for currency (learned in Lec 2)
    double walletBalance = 500.25;
    
    // Using simple cout for branding (Lec 1)
    cout << "--------------------------------" << endl;
    cout << "      WALLET ENGINE v0.1        " << endl;
    cout << "--------------------------------" << endl;
    
    cout << endl;

    cout << "Current Balance: $" << walletBalance << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Exit" << endl;
    
    int choice;
    cout << "Select Option: ";
    cin >> choice;

    // Logic using Conditionals (Lec 3)
    if (choice == 1) {
        cout << "Deposit feature coming soon!" << endl;
    } else if (choice == 2) {
        cout << "Withdrawal feature coming soon!" << endl;
    } else {
        cout << "Shutting down..." << endl;
    }

    return 0;
}
