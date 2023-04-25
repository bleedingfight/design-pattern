//
// Created by liushuai on 2020/12/6.
//

#ifndef STRATEGY_USCURRENCYSTRATEGYFACTORY_H
#define STRATEGY_USCURRENCYSTRATEGYFACTORY_H
#include "ICurrencyStrategyFactory.h"
#include "ICurrencyStrategy.h"
#include "USCurrencyStrategy.h"
class USCurrencyStrategyFactory : public ICurrencyStrategyFactory{
public:
    virtual ICurrencyStrategy* NewCurrencyStrategy();
    ~USCurrencyStrategyFactory();

};


#endif //STRATEGY_USCURRENCYSTRATEGYFACTORY_H
