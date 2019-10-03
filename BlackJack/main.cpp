//
//  main.cpp
//

#include <iostream>
#include <string>
#include <cassert>
#include "Card.h"
#include "Deck.h"
#include "Game.h"
#include "Player.h"
void clearScreen();

int main()
{

    using namespace cs31;
    using namespace std;
    string action;
    
    Game g;
    g.deal();
    clearScreen();
    if (g.playerHasBlackJack() || g.dealerHasBlackJack())
    {
        g.playerStands();
        g.dealerStands();
    }
    else
    {
        do
        {
            g.display( "(h)it (s)tand or (q)uit:" );
            getline( cin, action );
            if (action.size() == 0)
            {
                g.playerStands();
            }
            else
            {
                switch (action[0])
                {
                    default:   // if bad move, nobody moves
                        cout << '\a' << endl;  // beep
                        continue;
                    case 'Q':
                    case 'q':
                        return 0;
                    case 'h':
                    case 'H':
                        g.playerHits();
                        clearScreen();
                        break;
                    case 's':
                    case 'S':
                        g.playerStands();
                        break;
                }
            }
        } while( !g.playerBusted() && !g.playerStood() );
    
        clearScreen();
        g.dealerPlays();
    }
    
    if (g.playerWon())
    {
        g.display( "WON!", true );
    }
    else if (g.playerLost())
    {
        g.display( "LOST!", true );
    }
    else
    {
        g.display( "TIED!", true );
    }
    
 
    // test code
    Player p;
    Card c( Face::ACE, Suit::DIAMONDS );
    Card d( Face::TEN, Suit::CLUBS );
    Card e( Face::THREE, Suit::SPADES );
    Card f( Face::EIGHT, Suit::HEARTS );

    assert( c.toString() == "Ace of Diamonds" );
    assert( d.toString() == "Ten of Clubs" );
    assert( e.toString() == "Three of Spades" );
    assert( f.toString() == "Eight of Hearts" );
    assert( c.count() == 1 );
    assert( d.count() == 10 );
    assert( e.count() == 3 );
    assert( f.count() == 8 );

    Deck deck;
    deck.shuffleDeck();
    for (int i = 1; i <= 52; i++)
        deck.dealCard();
    // all the cards have been dealt...
    try
    {
        Card card = deck.dealCard();
        card.toString();
        assert( false );
    }
    catch( logic_error ) {
        assert( true );
    }

    assert( p.handcount() == 0 );
    assert( p.hasBlackJack() == false );
    assert( p.cardCount() == 0 );
    p.acceptCard( c );
    assert( p.handcount() == 11 );
    assert( p.hasBlackJack() == false );
    assert( p.cardCount() == 1 );
    assert( p.getCard(0) == c);
    p.acceptCard( d );
    assert( p.handcount() == 21 );
    assert( p.hasBlackJack() == true );
    assert( p.getCard(1) == d );
    
    for (int j = 1; j < p.cardCount(); j++)
    {
        Card card = p.getCard( j );
        card.toString();
    }
    // getCard throws logic_error when index is out of range
    try
    {
        p.getCard( 20 );
        assert( false );
    }
    catch (logic_error)
    {
        assert( true );
    }
    try
    {
        p.getCard( -20 );
        assert( false );
    }
    catch (logic_error)
    {
        assert( true );
    }
    // maximum number of cards allowed is 12
    p.acceptCard( e );
    p.acceptCard( f );
    p.acceptCard( c );
    p.acceptCard( d );
    p.acceptCard( e );
    p.acceptCard( f );
    p.acceptCard( c );
    p.acceptCard( d );
    p.acceptCard( e );
    p.acceptCard( f );
    // acceptCard throws logic_error with the 13th card
    try
    {
        p.acceptCard( c );
        assert( false );
    }
    catch (logic_error)
    {
        assert( true );
    }

    // case when the player and dealer are tied
    p = Player();
    Player dealer;
    Game h( p, dealer );
    h.playerStands();
    h.dealerStands();
    assert( h.dealerBusted()==false );
    assert( h.playerBusted()==false );
    assert( h.playerTied() == true );
    assert( h.playerWon() == false );
    assert( h.playerLost() == false );
    assert( h.playerHasBlackJack() == false );
    assert( h.dealerHasBlackJack() == false );

    // case when the player gets blackjack
    p = Player( );
    p.acceptCard( c );
    p.acceptCard( d );
    dealer = Player( );
    dealer.acceptCard( e );
    dealer.acceptCard( f );
    h = Game( p, dealer );
    h.playerStands();
    h.dealerStands();
    assert( h.dealerBusted()==false );
    assert( h.playerBusted()==false );
    assert( h.playerTied() == false );
    assert( h.playerWon() == true );
    assert( h.playerLost() == false );
    assert( h.playerHasBlackJack() == true );
    assert( h.dealerHasBlackJack() == false );
    
    cout << "all tests passed!" << endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//  clearScreen implementations
///////////////////////////////////////////////////////////////////////////

// DO NOT MODIFY OR REMOVE ANY CODE BETWEEN HERE AND THE END OF THE FILE!!!
// THE CODE IS SUITABLE FOR VISUAL C++, XCODE, AND g++ UNDER LINUX.

// Note to Xcode users:  clearScreen() will just write a newline instead
// of clearing the window if you launch your program from within Xcode.
// That's acceptable.

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    COORD upperLeft = { 0, 0 };
    DWORD dwCharsWritten;
    FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
                               &dwCharsWritten);
    SetConsoleCursorPosition(hConsole, upperLeft);
}

#else  // not Microsoft Visual C++, so assume UNIX interface

#include <cstring>
#include <cstdlib>

void clearScreen()  // will just write a newline in an Xcode output window
{
    using namespace std;
    static const char* term = getenv("TERM");
    if (term == NULL  ||  strcmp(term, "dumb") == 0)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl;;
    }
    else
    {
        static const char* ESC_SEQ = "\x1B[";  // ANSI Terminal esc seq:  ESC [
        cout << ESC_SEQ << "2J" << ESC_SEQ << "H" << flush;
    }
}

#endif
