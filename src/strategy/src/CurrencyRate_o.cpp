//
// Created by liushuai on 2020/12/5.
//

#include "CurrencyRate_o.h"
double CurrencyRate_o::CalculateRate(const double x) {
    if (cc == US_RATE){
        return 0.39*x;
    }else if(cc == RUSSIA_RATE){
        return 0.13*x;
    }
}
CurrencyRate_o::CurrencyRate_o(CurrencyCate c) {
    cc = c;
}