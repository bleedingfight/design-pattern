//
// Created by liushuai on 2020/12/5.
//

#ifndef STRATEGY_CURRENCYRATE_O_H
#define STRATEGY_CURRENCYRATE_O_H

#include "CurrencyCat.h"
class CurrencyRate_o {
    CurrencyCate cc;
public:
    CurrencyRate_o(CurrencyCate c);
    double CalculateRate(const double x);
};


#endif //STRATEGY_CURRENCYRATE_O_H
