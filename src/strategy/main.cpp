//
// Created by liushuai on 2020/12/5.
//

#include <iostream>
#include "CurrencyRate_o.h"
#include "CurrencyCat.h"
#include "ICurrencyStrategyFactory.h"
#include "Context.h"
#include "RussiaCurrencyStratrgyFactory.h"
#include "RussiaCurrencyStrategy.h"
#include "CurrencyRate.h"
using namespace std;
int main(){
    CurrencyCate{US_RATE};
    CurrencyRate_o cr(US_RATE);
    double rate = cr.CalculateRate(100.0);

    ICurrencyStrategyFactory* factory;

    RussiaCurrencyStratrgyFactory* rsf= new RussiaCurrencyStratrgyFactory();
    ICurrencyStrategy* strategy;
    RussiaCurrencyStrategy *usstrategy;
    Context c(100);
    CurrencyRate currentrate(rsf);

    double currency_value = currentrate.Calculate(c);
    cout<<currency_value<<"\n";
    delete rsf;
}