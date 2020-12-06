//
// Created by liushuai on 2020/12/6.
//

#ifndef STRATEGY_USCURRENCYSTRATEGY_H
#define STRATEGY_USCURRENCYSTRATEGY_H

#include "Context.h"
#include "ICurrencyStrategy.h"
class USCurrencyStrategy : public ICurrencyStrategy{
    virtual double calculateCurrency(Context& c);
};


#endif //STRATEGY_USCURRENCYSTRATEGY_H
