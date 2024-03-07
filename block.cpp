#include <iostream>
#include <fstream>

using namespace std;
struct Expense {
    string category;
    double amount;
};
class ExpenseTracker {
private:
    string month;
    double budget;
    double totalExpense;
public:
    // Constructor
    ExpenseTracker(string m, double b) : month(m), budget(b), totalExpense(0.0) {}

    void addExpense(string category, double amount) {
        totalExpense += amount;
        Expense expense = {category, amount};
        saveExpense(expense);
    }
    void saveExpense(Expense expense) {
        ofstream outFile("expenses.bin", ios::binary | ios::app);
        outFile.write(reinterpret_cast<char*>(&expense), sizeof(Expense));
        outFile.close();
    }
    void displayReport() {
        cout << "Month: " << month << endl;
        cout << "Budget: $" << budget << endl;
        cout << "Total Expenses: $" << totalExpense << endl;
        cout << "Remaining Budget: $" << (budget - totalExpense) << endl;
        cout << "------------------------------------" << endl;
        cout << "Expense Details:" << endl;
        ifstream inFile("expenses.bin", ios::binary);
        Expense expense;
        while (inFile.read(reinterpret_cast<char*>(&expense), sizeof(Expense))) {
            cout << "Category: " << expense.category << ", Amount: $" << expense.amount << endl;
        }
        inFile.close();
    }
};

int main() {
    string month;
    double budget;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the budget for " << month << ": $";
    cin >> budget;

    ExpenseTracker tracker(month, budget);

    char addAnotherExpense;
    do {
        string category;
        double amount;

        cout << "Enter the category of the expense: ";
        cin >> category;

        cout << "Enter the amount for " << category << ": $";
        cin >> amount;

        tracker.addExpense(category, amount);

        cout << "Do you want to add another expense? (y/n): ";
        cin >> addAnotherExpense;
    } while (addAnotherExpense == 'y' || addAnotherExpense == 'Y');

    tracker.displayReport();

    return 0;
}
