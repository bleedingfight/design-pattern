//
// Created by liushuai on 2020/12/6.
//

#include "ICurrencyStrategyFactory.h"
ICurrencyStrategyFactory::~ICurrencyStrategyFactory() {
    std::cout<<"Destroy ICurrencyStrategyFactory"<<"\n";
}
ICurrencyStrategy * ICurrencyStrategyFactory::NewCurrencyStrategy() {
    return new ICurrencyStrategy();
}