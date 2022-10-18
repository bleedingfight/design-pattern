#pragma once
#include <memory>

#include "bank_account.h"
#include "command.h"
class BankAccountCommand : public Command {
  std::shared_ptr<BankAccount>& account;
  int amount;

 public:
  enum Action { deposit, withdraw } action;
  BankAccountCommand(std::shared_ptr<BankAccount>& account, const Action action,
                     const int amount);
  void call() override;
  void undo() override;
};
