// Player.cpp

#include "Player.h"
#include <iostream>
    
Player::Player() : mDie( 6 ), mScore( 0 ), mTotal( 0 ) {
        
}
    
// rolls the die and adjusts the score for the current round accordingly
// when the amount is zero, the Die should be rolled for random play
// when the amount is not zero, we are trying to cheat for testing purposes.  
// in that case, this method should force a specific roll amount.
int Player::roll( int amount ) {
    int rolledNumer;
    if(amount == 0) {
        mDie.roll();
        rolledNumer = mDie.getValue();
    }
    else {
        rolledNumer = amount;
    }
    mScore += rolledNumer;
    if (rolledNumer == 1) {
        mScore = 0;
    }
    return rolledNumer;
}
    
// adds the current score into the running total since the turn ended
// reset the current score to 0 for the next round of play
void Player::endTurn(){
    mTotal += mScore;
    mScore = 0;
}
    
int Player::getTotal( ) const {
    return mTotal;
}
    
int  Player::getScore( ) const {
    return mScore;
}
