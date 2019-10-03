//
//  Card.cpp
//

#include "Card.h"
#include <string>

namespace cs31
{
    // by default, a Card is not yet played
    Card::Card( Face f, Suit s ) : myFace( f ), mySuit( s ), myCycle( NOTPLAYED )
    {

    }

    // trivial getter
    cs31::Face Card::getFace( ) const
    {
        return( myFace );
    }
    
    // trivial getter
    cs31::Suit Card::getSuit( ) const
    {
        return( mySuit );
    }
    
    // trivial getter
    bool Card::isInPlay( ) const
    {
        return( myCycle == INPLAY );
    }
    
    // trivial getter
    bool Card::isDiscarded( ) const
    {
        return( myCycle == DISCARDED );
    }
    
    // trivial getter
    bool Card::isNotPlayed( ) const
    {
        return( myCycle == NOTPLAYED );
    }
    
    // trivial lifecycle setter
    void Card::discard( )
    {
        myCycle = DISCARDED;
    }
    
    // trivial lifecycle setter
    void Card::recycle()
    {
        myCycle = NOTPLAYED;
    }
    
    // trivial lifecycle setter
    void Card::inplay()
    {
        myCycle = INPLAY;
    }

    // return true when the two Card parameters have the
    // same Face and Suit value
    bool operator==( const Card& c1, const Card& c2 )
    {
       return( c1.getFace() == c2.getFace() && c1.getSuit() == c2.getSuit() );
    }
    
    // TODO: CS 31 students need to complete this operation
    // toString() stringifies this Card, as in:
    // "Ace of Hearts"
    std::string Card::toString() const
    {
        // just for now...
        std::string s = "";
        
        switch (getFace()) {
            case Face::ACE:
                s += "Ace of ";
                break;
            case Face::DEUCE:
                s += "Deuce of ";
                break;
            case Face::THREE:
                s += "Three of ";
                break;
            case Face::FOUR:
                s += "Four of ";
                break;
            case Face::FIVE:
                s += "Five of ";
                break;
            case Face::SIX:
                s += "Six of ";
                break;
            case Face::SEVEN:
                s += "Seven of ";
                break;
            case Face::EIGHT:
                s += "Eight of ";
                break;
            case Face::NINE:
                s += "Nine of ";
                break;
            case Face::TEN:
                s += "Ten of ";
                break;
            case Face::JACK:
                s += "Jack of ";
                break;
            case Face::QUEEN:
                s += "Queen of ";
                break;
            case Face::KING:
                s += "King of ";
                break;
        }
        
//        s += "of";
        
        switch (getSuit()){
            case Suit::HEARTS:
                s += "Hearts";
                break;
            case Suit::DIAMONDS:
                s += "Diamonds";
                break;
            case Suit::CLUBS:
                s += "Clubs";
                break;
            case Suit::SPADES:
                s += "Spades";
                break;
        }
        return( s );
    }

    // TODO: CS 31 students need to complete this operation
    // count() returns the value of this card in the
    // BlackJack game
    int  Card::count( ) const
    {
        // just for now...
        int result = 0;
        switch (getFace()) {
            case Face::ACE:
                result = 1;
                break;
            case Face::DEUCE:
                result = 2;
                break;
            case Face::THREE:
                result = 3;
                break;
            case Face::FOUR:
                result = 4;
                break;
            case Face::FIVE:
                result = 5;
                break;
            case Face::SIX:
                result = 6;
                break;
            case Face::SEVEN:
                result = 7;
                break;
            case Face::EIGHT:
                result = 8;
                break;
            case Face::NINE:
                result = 9;
                break;
            case Face::TEN:
                result = 10;
                break;
            case Face::JACK:
                result = 11;
                break;
            case Face::QUEEN:
                result = 12;
                break;
            case Face::KING:
                result = 13;
                break;
        }
        return( result );
    }
}
