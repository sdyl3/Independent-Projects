//  Ticket.h

#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>
using namespace std;

class Ticket
{

public:
    enum KIND { ATHLETICGAME, CONCERT, MOVIE, OTHER };

    Ticket(string row, int seat, string event, string venue, double price, KIND kind, string daytime);

    string getRow() const;
    int getSeat() const;
    string getEvent() const;
    string getVenue() const;
    double getPrice() const;
    void setPrice(double price);
    KIND getKind() const;
    string getDayTime() const;

private:
    string mRow;
    int mSeat;
    string mEvent;
    string mVenue;
    double mPrice;
    KIND mKind;
    string mDayTime;

};

#endif /* Ticket_h */
