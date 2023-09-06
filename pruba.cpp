#include <iostream>
#include "otro.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 1000};
    Account account2{"John Blue", 50};

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    int withdrawalAmount;

    cout << "\n\nEnter withdrawal amount for account1: "; // Solicita al usuario ingresar un monto a retirar
    cin >> withdrawalAmount; // Lee el monto ingresado por el usuario desde la entrada estándar
    cout << "withdrawing " << withdrawalAmount << " from account1 balance"; // Muestra un mensaje indicando el monto a retirar
    account1.withdraw(withdrawalAmount); // Llama al método withdraw para realizar el retiro

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

    cout << "\n\nEnter withdrawal amount for account2: "; // Solicita al usuario ingresar un monto a retirar
    cin >> withdrawalAmount; // Lee el monto ingresado por el usuario desde la entrada estándar
    cout << "withdrawing " << withdrawalAmount << " from account2 balance"; // Muestra un mensaje indicando el monto a retirar
    account2.withdraw(withdrawalAmount); // Llama al método withdraw para realizar el retiro

    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

    return 0;
}