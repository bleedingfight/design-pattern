//
// Created by liushuai on 2020/12/7.
//

#include "RussiaCurrencyStratrgyFactory.h"
RussiaCurrencyStratrgyFactory::~RussiaCurrencyStratrgyFactory() {
    std::cout<<"Destroy RussiaCurrencyStrategyFactory\n";
}
ICurrencyStrategy * RussiaCurrencyStratrgyFactory::NewCurrencyStrategy() {
    return new RussiaCurrencyStrategy();
}