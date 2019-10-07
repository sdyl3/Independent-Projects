//  CreditCard.h
//  CS 31 Project 5
//  Yinling Li

#ifndef CreditCard_h
#define CreditCard_h
#include <iostream>
#include <string>
using namespace std;

class CreditCard {

public:
    enum CATEGORY { GAS, DINING, TRAVEL, GROCERY, ALLELSE };
    // constructor
    CreditCard();
    // functions
    void payFor( double, CATEGORY );
    double totalSpend();
    double totalSpend( CATEGORY ) const;
    void clearSpending();
        
private:
    double gasSpending;
    double diningSpending;
    double travelSpending;
    double grocerySpending;
    double allElseSpending;
    
    double totalSpending;
};

#endif /* CreditCard_h */
