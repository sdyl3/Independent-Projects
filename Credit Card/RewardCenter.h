//  RewardCenter.h
//  CS 31 Project 5
//  Yinling Li

#ifndef RewardCenter_h
#define RewardCenter_h
#include "CreditCard.h"
#include "RewardRates.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class RewardCenter{
public:
    RewardCenter();
    double calculateCashBack( const CreditCard& );
    double calculateCashBack( const CreditCard&, RewardRates );
    
    double earnCashBack( CreditCard& );
    double earnCashBack( CreditCard&, RewardRates );
};

#endif /* RewardCenter_h */
