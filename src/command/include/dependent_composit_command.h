#pragma once
#include <algorithm>
#include <string>
#include <vector>

#include "composite_bank_account_command.h"
class DependentCompositCommand : public CompositBankAccountCommand {
 public:
  explicit DependentCompositCommand(const initializer_list<value_type>& list)
      : CompositBankAccountCommand{list} {};
};
