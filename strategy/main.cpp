//
// Created by liushuai on 2020/12/5.
//

#include <iostream>
#include "CurrencyRate_o.h"
#include "CurrencyCat.h"
#include "CurrencyRate.h"
#include "ICurrencyStrategyFactory.h"
#include "USCurrencyStrategy.h"
#include "USCurrencyStrategyFactory.h"
using namespace std;
int main(){
    CurrencyCate{US_RATE};
    CurrencyRate_o cr(US_RATE);
    double rate = cr.CalculateRate(100.0);

    ICurrencyStrategyFactory* factory;
    USCurrencyStrategyFactory* isf= new USCurrencyStrategyFactory();
    factory = isf;
    ICurrencyStrategy* strategy;
    USCurrencyStrategy *usstrategy;
    usstrategy=  isf->NewCurrencyStrategy();
    strategy = usstrategy;


    cout<<rate;
}