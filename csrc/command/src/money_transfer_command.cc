#include "money_transfer_command.h"
MoneyTransferCommand::MoneyTransferCommand{
    BankAccountCommand{from, BankAccountCommand::widthdraw, amount},
    BankAccountCommand{to, BankAccountCommand::deposit, amount}} {}
