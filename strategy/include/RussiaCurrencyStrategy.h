//
// Created by liushuai on 2020/12/7.
//

#ifndef STRATEGY_RUSSIACURRENCYSTRATEGY_H
#define STRATEGY_RUSSIACURRENCYSTRATEGY_H

#include "ICurrencyStrategy.h"
class RussiaCurrencyStrategy : public ICurrencyStrategy{
public:
    virtual ~RussiaCurrencyStrategy();
    virtual double calculateCurrency(Context& c);

};


#endif //STRATEGY_RUSSIACURRENCYSTRATEGY_H
