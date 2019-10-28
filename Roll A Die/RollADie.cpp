//  RollADie.cpp

#include "RollADie.h"
#include <iostream>

    RollADie::RollADie() {

    }
    
    // stringify the Game by stringifying the Game's Board
    std::string RollADie::display( std::string msg ) {
        using namespace std;
        std::string s = mBoard.display();
        s = s + msg;

        if (isGameOver()) {
            if (determineGameOutcome() == HUMANWONGAME) {
                s = s + "\n\t\tyou won RollADie!\n";
            }
            else {
                s = s + "\n\t\tyou lost RollADie!\n";
            }
        }
        return( s );
    }
    
    // let the human player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    // once you have a rolled amount, inform the board that it is now
    // the human's turn, set the board's rolled value and update the board's
    // human score accordingly
    int RollADie::humanPlay( int amount ) {
        int amountRolled = 0;
        if (amount == 0)
            amountRolled = mHuman.roll(0);
        else
            amountRolled = mHuman.roll(amount);
        mBoard.setHumanTurn();
        mBoard.setRolledValue(amountRolled);
        mBoard.setHumanScore(mHuman.getScore());
        return( amountRolled );
    }
    
    // inform the human Player that their turn has ended
    // update the board's human total
    void RollADie::humanEndTurn() {
        mHuman.endTurn();
        mBoard.setHumanTotal( mHuman.getTotal() );
    }
    
    // let the computer player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    // once you have a rolled amount, inform the board that it is now
    // the computer's turn, set the board's rolled value and update the board's
    // computer score accordingly
    int RollADie::computerPlay( int amount ){
        int amountRolled = 0;
        if (amount == 0)
            amountRolled = mComputer.roll(0);
        else
            amountRolled = mComputer.roll(amount);
        mBoard.setComputerTurn();
        mBoard.setRolledValue(amountRolled);
        mBoard.setComputerScore(mComputer.getScore());
        return( amountRolled );
    }
    
    // when keeprolling returns true, the computer will keep rolling
    // this method implements a 60% chance to keep rolling
    // unless the score plus the existing total >= SCORENECESSARYTOWIN
    bool RollADie::computerKeepRolling() const{
        bool result( false );
        Die d( 5 );
        d.roll();
        if (d.getValue() >= 3){
            result = true;
        }
        if (mComputer.getScore() + mComputer.getTotal() >= SCORENECESSARYTOWIN) {
            result = false;
        }
        return( result );
    }
    
    // inform the computer Player that their turn has ended
    // update the board's computer total
    void RollADie::computerEndTurn() {
        mComputer.endTurn();
        mBoard.setComputerTotal( mComputer.getTotal() );
    }
    
    // determines the game outcome at this moment
    RollADie::GAMEOUTCOME  RollADie::determineGameOutcome( ) const {
        GAMEOUTCOME result = GAMEOUTCOME::GAMENOTOVER;
        if (mBoard.getHumanTotal() >= SCORENECESSARYTOWIN)
            result = GAMEOUTCOME::HUMANWONGAME;
        else if (mBoard.getComputerTotal() >= SCORENECESSARYTOWIN)
            result = GAMEOUTCOME::COMPUTERWONGAME;
        // first player to 30 wins!   which is the value of    SCORENECESSARYTOWIN
        return( result );
    }
    
    // determines if the game is over
    // if it has, return true and inform the board that the game is over and
    // inform the board that the Human won or the Computer won, accordingly
    bool RollADie::isGameOver(){
        GAMEOUTCOME result = determineGameOutcome();
        if (result == GAMEOUTCOME::HUMANWONGAME) {
            mBoard.markHumanAsWinner();
            mBoard.setGameOver(true);
            return true;
        }
        else if (result == GAMEOUTCOME::COMPUTERWONGAME) {
            mBoard.markComputerAsWinner();
            mBoard.setGameOver(true);
            return true;
        }
        else return( false );
    }
