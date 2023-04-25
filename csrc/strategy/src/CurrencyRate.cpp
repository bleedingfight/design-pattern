//
// Created by liushuai on 2020/12/6.
//

#include "CurrencyRate.h"
CurrencyRate::CurrencyRate(ICurrencyStrategyFactory *currencyStrategyFactory) {
    this->strategy = currencyStrategyFactory->NewCurrencyStrategy();
}
CurrencyRate::~CurrencyRate() {
    delete this->strategy;
}
double CurrencyRate::Calculate(Context& context) {
    return this->strategy->calculateCurrency(context);
}