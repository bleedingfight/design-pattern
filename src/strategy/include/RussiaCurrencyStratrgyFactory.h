//
// Created by liushuai on 2020/12/7.
//

#ifndef STRATEGY_RUSSIACURRENCYSTRATRGYFACTORY_H
#define STRATEGY_RUSSIACURRENCYSTRATRGYFACTORY_H

#include "ICurrencyStrategyFactory.h"
#include "RussiaCurrencyStrategy.h"
class RussiaCurrencyStratrgyFactory : public ICurrencyStrategyFactory{
public:
    virtual ~RussiaCurrencyStratrgyFactory();
    virtual ICurrencyStrategy* NewCurrencyStrategy();

};


#endif //STRATEGY_RUSSIACURRENCYSTRATRGYFACTORY_H
