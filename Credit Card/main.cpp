//  main.cpp
//  CS 31 Project 5
//  Yinling Li

#include <iostream>
#include <string>
#include <cassert>

#include "CreditCard.h"
#include "RewardRates.h"
#include "RewardCenter.h"

using namespace std;
int main() {
    
    CreditCard c;
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "0.000000" );

    c.payFor(10, CreditCard::CATEGORY::GAS);
    c.payFor(10, CreditCard::CATEGORY::TRAVEL);
//    assert( std::to_string( c.totalSpend() ) == "20.000000" );
//    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "10.000000" );
//    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "10.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "0.000000" );

    c.clearSpending();
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GAS)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::TRAVEL)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::GROCERY)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::DINING)) == "0.000000" );
    assert( std::to_string( c.totalSpend(CreditCard::CATEGORY::ALLELSE)) == "0.000000" );

    RewardCenter r;
    RewardRates rates = { 1, 2, 3, 4, 5 };
    // 1% earned on gas purchases
    // 2% earned on dining purchases
    // 3% earned on travel purchases
    // 4% earned on grocery purchases
    // 5% earned on everything else

    assert( std::to_string( rates.GasRate ) == "1.000000" );
    assert( std::to_string( rates.DiningRate ) == "2.000000" );
    assert( std::to_string( rates.TravelRate ) == "3.000000" );
    assert( std::to_string( rates.GroceryRate ) == "4.000000" );
    assert( std::to_string( rates.AllElseRate ) == "5.000000" );

    c.payFor(100.00, CreditCard::CATEGORY::GAS);
    c.payFor(100.00, CreditCard::CATEGORY::DINING);
    // lacking a RewardRate structure, 1% is earned on every purchase
//    assert( std:: to_string( r.calculateCashBack( c ) ) == "2.000000" );
//    assert( std::to_string( c.totalSpend() ) == "200.000000" );
//
//    // influence the cashback earned by the RewardRates structure above
//    assert( std::to_string( r.calculateCashBack( c, rates ) ) == "3.000000" );
//    assert( std::to_string( c.totalSpend() ) == "200.000000" );
//    // once cashback is earned, spending levels return to zero
//    assert( std::to_string( r.earnCashBack( c, rates ) ) == "3.000000" );
    assert( std::to_string( c.totalSpend() ) == "0.000000" );
    
    cout << "all tests passed!" << endl;
    return 0;
}
