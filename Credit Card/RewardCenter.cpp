//  RewardCenter.cpp
//  CS 31 Project 5
//  Yinling Li

#include "CreditCard.h"
#include "RewardRates.h"
#include "RewardCenter.h"
#include <iostream>
#include <string>
using namespace std;

// calculate the cashback earned from spending
// cashback will be 1% of the total spent
RewardCenter::RewardCenter(){
//    double GasRate = 0;
//    double DiningRate = 0;
//    double TravelRate = 0;
//    double GroceryRate = 0;
//    double AllElseRate = 0;
}
// returns the amount of cash reward that has been earned so far
// does not change the CreditCard or RewardRates parameters in any way
double calculateCashBack( const CreditCard& );
double calculateCashBack( const CreditCard&, RewardRates );
//{
//    double cashBack = 0;
//    if (CreditCard::CATEGORY::GAS){
//    }
//}

// returns the amount of cash reward that has been earned so far
// it should update the CreditCard parameter, resetting all its spending levels back to zero to start over earning an additional reward
double earnCashBack( CreditCard& );
double earnCashBack( CreditCard&, RewardRates );
