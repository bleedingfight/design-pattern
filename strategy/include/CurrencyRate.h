//
// Created by liushuai on 2020/12/6.
//

#ifndef STRATEGY_CURRENCYRATE_H
#define STRATEGY_CURRENCYRATE_H
#include "ICurrencyStrategy.h"
#include "ICurrencyStrategyFactory.h"
#include "Context.h"
class CurrencyRate {
private:
    ICurrencyStrategy* strategy;
public:
    CurrencyRate(ICurrencyStrategyFactory* currencyStrategyFactory);
    ~CurrencyRate();
    double Calculate();

};


#endif //STRATEGY_CURRENCYRATE_H
