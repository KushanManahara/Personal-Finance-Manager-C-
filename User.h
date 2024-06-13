#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Expense.h"

using namespace std;

class User {
public:
    User(const std::string& name);
    void addExpense(const Expense& expense);
    void removeExpense(int index);
    void displayExpenses() const;
    const string& getName() const;

private:
    string name;
    vector<Expense> expenses;
};

#endif // USER_H