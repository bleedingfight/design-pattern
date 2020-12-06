//
// Created by liushuai on 2020/12/5.
//

#include <iostream>
#include "CurrencyRate_o.h"
#include "CurrencyCat.h"
using namespace std;
int main(){
    CurrencyCate{US_RATE};
    CurrencyRate_o cr(US_RATE);
    double rate = cr.CalculateRate(100.0);
    cout<<rate;
}