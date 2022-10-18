#include <memory>
#include <vector>

#include "bank_account.h"
#include "bank_account_command.h"
#include "command.h"
int main() {
  std::shared_ptr<BankAccount> ba = std::make_shared<BankAccount>();
  std::vector<BankAccountCommand> commands = {
      BankAccountCommand{ba, BankAccountCommand::deposit, 100},
      BankAccountCommand{ba, BankAccountCommand::withdraw, 200}};
  std::cout << *ba << "\n";
  for (auto& cmd : commands) cmd.call();
  std::cout << *ba << "\n";
  for (auto it = commands.rbegin(); it != commands.rend(); ++it) it->undo();
  std::cout << *ba << "\n";
  BankAccount ba;
  CompositeBankAccountCommand commands{
      BankAccountCommand{ba, BankAccountCommand::deposit, 100},
      BankAccountCommand{ba, BankAccountCommand::withdraw, 200}};
  std::cout << ba.balance << "\n";
  commands.call();
  std::cout << ba.balance << "\n";
}
