#pragma once
#include <initializer_list>
#include <vector>

#include "bank_account.h"
#include "bank_account_command.h"
#include "command.h"
class CompositeBankAccountCommand : public std::vector<BankAccountCommand>,
                                    public Command {
 public:
  CompositeBankAccountCommand(const std::initializer_list<value_type>& items)
      : std::vector<BankAccountCommand>(items) {}
  void call() override;
  void undo() override;
};
