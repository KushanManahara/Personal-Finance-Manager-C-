#include "User.h"
#include <iostream>

User::User(const std::string& name) : name(name) {}

void User::addExpense(const Expense& expense) {
    expenses.push_back(expense);
}

void User::removeExpense(int index) {
    if (index >= 0 && index < expenses.size()) {
        expenses.erase(expenses.begin() + index);
    }
}

void User::displayExpenses() const {
    for (const auto& expense : expenses) {
        expense.display();
    }
}

const std::string& User::getName() const {
    return name;
}
