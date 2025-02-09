//  Die.cpp

#include "Die.h"
#include <random>

Die::Die( int sides ) : mSides( sides ), mValue( 1 ) {

}
    
// generates a random distribution of values between 1 and mSides
// stores the random value in the member variable mValue for later use
void Die::roll() {
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_int_distribution<> dist(1, mSides);
    mValue = dist(e2);
}
    
// returns the most recent tossed value
int  Die::getValue( ) const {
    return( mValue );
}
