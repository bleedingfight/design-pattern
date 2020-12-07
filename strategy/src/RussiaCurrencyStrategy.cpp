//
// Created by liushuai on 2020/12/7.
//

#include "RussiaCurrencyStrategy.h"
RussiaCurrencyStrategy::~RussiaCurrencyStrategy(){
    std::cout<<"Destroy RussiaCurrencyStrategy\n";
}
double RussiaCurrencyStrategy::calculateCurrency(Context &c) {
    return 0.13*c.value;
}