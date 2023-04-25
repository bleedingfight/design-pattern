#include "composite_bank_account_command.h"
void CompositeBankAccountCommand::call() {
  for (auto& cmd : *this) cmd.call();
}
void CompositeBankAccountCommand::undo() {
  for (auto it = rbegin(); it != rend(); ++it) {
    it->undo();
  }
}
