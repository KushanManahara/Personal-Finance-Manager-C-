#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

vector<User> users;

void createUser() {
    string name;
    cout << "Enter user name: ";
    cin >> name;
    users.emplace_back(name);
}

void addExpense() {
    string userName, category;
    double amount;
    cout << "Enter user name: ";
    cin >> userName;
    cout << "Enter expense category: ";
    cin >> category;
    cout << "Enter expense amount: ";
    cin >> amount;

    for (auto& user : users) {
        if (user.getName() == userName) {
            user.addExpense(Expense(category, amount));
            break;
        }
    }
}

void viewExpenses() {
    string userName;
    cout << "Enter user name: ";
    cin >> userName;

    for (const auto& user : users) {
        if (user.getName() == userName) {
            user.displayExpenses();
            break;
        }
    }
}

int main() {
    int choice;
    do {
        cout << "1. Create User\n2. Add Expense\n3. View Expenses\n4. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            createUser();
            break;
        case 2:
            addExpense();
            break;
        case 3:
            viewExpenses();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}