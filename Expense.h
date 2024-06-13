#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

using namespace std;

class Expense {
public:
    Expense(const string& category, double amount);
    void display() const;

private:
    string category;
    double amount;
};

#endif // EXPENSE_H
