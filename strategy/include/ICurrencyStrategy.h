//
// Created by liushuai on 2020/12/6.
//

#ifndef STRATEGY_ICURRENCYSTRATEGY_H
#define STRATEGY_ICURRENCYSTRATEGY_H
#include "Context.h"

class ICurrencyStrategy {
public:
    virtual double calculateCurrency(Context& c)=0;
    virtual ~ICurrencyStrategy();
};


#endif //STRATEGY_ICURRENCYSTRATEGY_H
