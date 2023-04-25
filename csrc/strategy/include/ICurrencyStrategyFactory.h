//
// Created by liushuai on 2020/12/6.
//

#ifndef STRATEGY_ICURRENCYSTRATEGYFACTORY_H
#define STRATEGY_ICURRENCYSTRATEGYFACTORY_H
#include "ICurrencyStrategy.h"

class ICurrencyStrategyFactory {
public:
    virtual ICurrencyStrategy* NewCurrencyStrategy() = 0;
    ~ICurrencyStrategyFactory();

};


#endif //STRATEGY_ICURRENCYSTRATEGYFACTORY_H
