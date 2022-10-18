#include "bank_account_command.h"
BankAccountCommand::BankAccountCommand(std::shared_ptr<BankAccount>& account,
                                       const Action action, const int amount)
    : account(account), action(action), amount(amount) {
  successed = false;
}
void BankAccountCommand::call() {
  switch (action) {
    case deposit:
      account->deposit(amount);
      successed = true;
      break;
    case withdraw:
      successed = account->withdraw(amount);
      break;
    default:
      break;
  }
}
void BankAccountCommand::undo() {
  if (!successed) return;
  switch (action) {
    case withdraw:
      account->deposit(amount);
      break;
    case deposit:
      account->withdraw(amount);
      break;
    default:
      break;
  }
}
