#include "bank_account.h"
void BankAccount::deposit(int amount) {
  balance += amount;
  std::cout << "Deposited " << amount << ",balance is now " << balance << "\n";
}
bool BankAccount::withdraw(int amount) {
  if (balance - amount >= overdraft_limit) {
    balance -= amount;
    std::cout << "withdrew " << amount << ",balance is now " << balance << "\n";
    return true;
  }
  return false;
}
int BankAccount::getBalance() const { return balance; }
