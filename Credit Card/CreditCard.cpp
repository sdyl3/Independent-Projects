//  CreditCard.cpp
//  CS 31 Project 5
//  Yinling Li

#include "CreditCard.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

CreditCard::CreditCard(){
    gasSpending = 0;
    diningSpending = 0;
    travelSpending = 0;
    grocerySpending = 0;
    allElseSpending = 0;
    totalSpending = gasSpending + diningSpending + travelSpending + grocerySpending + allElseSpending;
}

// adjust spending in one of these known categories.
void CreditCard::payFor( double, CATEGORY ){

}

// retrieve spending levels
double CreditCard::totalSpend( )
{
    return totalSpending;
}

double CreditCard::totalSpend( CATEGORY category) const {
    if (category == CreditCard::CATEGORY::GAS){
        return gasSpending;
    }
    if (category == CreditCard::CATEGORY::DINING){
        return diningSpending;
    }
    if (category == CreditCard::CATEGORY::TRAVEL){
        return travelSpending;
    }
    if (category == CreditCard::CATEGORY::GROCERY){
        return grocerySpending;
    }
    if (category == CreditCard::CATEGORY::ALLELSE){
        return allElseSpending;
    }
    return totalSpending;
    
}

void CreditCard::clearSpending() {
    gasSpending = 0;
    diningSpending = 0;
    travelSpending = 0;
    grocerySpending = 0;
    allElseSpending = 0;
    totalSpending = 0;
}
