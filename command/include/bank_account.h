#pragma once
#include <iostream>
class BankAccount {
  int balance;
  const int overdraft_limit = -500;

 public:
  void deposit(int amount);
  bool withdraw(int amount);
  int getBalance() const;
  friend std::ostream& operator<<(std::ostream& os, BankAccount& ba) {
    std::cout << "Balance = " << ba.getBalance() << "\n";
    return os;
  }
};
