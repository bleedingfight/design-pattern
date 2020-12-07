//
// Created by liushuai on 2020/12/6.
//

#include "USCurrencyStrategyFactory.h"
ICurrencyStrategy * USCurrencyStrategyFactory::NewCurrencyStrategy() {
    return new USCurrencyStrategy();
}
USCurrencyStrategyFactory::~ICurrencyStrategyFactory() {
    std::cout<<"Destroy USCurrencyStrategy"<<"\n";
}
