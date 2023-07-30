#pragma once
#include "composite_bank_account_command.h"
class MoneyTransferCommand : public CompositeBankAccountCommand {
  MoneyTransferCommand(BankAccount& from, BankAccount& to, int amount);
};
