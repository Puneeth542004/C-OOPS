#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance) : accountHolderName(name), balance(initialBalance) {
        std::cout << "Bank account created for " << accountHolderName << std::endl;
    }

    ~BankAccount() {
        std::cout << "Bank account for " << accountHolderName << " is closed" << std::endl;
    }

    void displayBalance() {
        std::cout << "Account Holder: " << accountHolderName << ", Balance: $" << balance << std::endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into account of " << accountHolderName << std::endl;
        } else {
            std::cout << "Invalid amount for deposit" << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from account of " << accountHolderName << std::endl;
        } else {
            std::cout << "Insufficient balance or invalid amount for withdrawal" << std::endl;
        }
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Alice Smith", 5000.0);

    account1.displayBalance();
    account1.deposit(500);
    account1.withdraw(200);
    account1.displayBalance();

    account2.displayBalance();
    account2.withdraw(6000); 
    account2.displayBalance();

    return 0;
}
