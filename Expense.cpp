#include "Expense.h"
#include <iostream>

Expense::Expense(const std::string& category, double amount)
    : category(category), amount(amount) {}

void Expense::display() const {
    std::cout << "Category: " << category << ", Amount: $" << amount << "\n";
}
