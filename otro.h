#include <string>
#include <iostream>

class Account {
public:
    Account(std::string accountName, int initialBalance)
        : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        } else {
            std::cout << "Invalid initial balance. The balance will be set to 0." << std::endl;
        }
    }

    void withdraw(int withdrawalAmount) {
        if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
            balance -= withdrawalAmount;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
    int balance{0};
};
