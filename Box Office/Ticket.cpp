//
//  Ticket.cpp
//  Project5
//
//  Created by Sandy Li on 2/25/19.
//  Copyright © 2019 Yinling Li. All rights reserved.
//

#include <iostream>
#include <string>

#include "Ticket.h"
using namespace std;

Ticket::Ticket(string row, int seat, string event, string venue, double price, KIND kind, string daytime)
{
    mRow = row;
    mSeat = seat;
    mEvent = event;
    mVenue = venue;
    mPrice = price;
    mKind = kind;
    mDayTime = daytime;
}

string Ticket::getRow() const {
    return( mRow );
}

int Ticket::getSeat() const {
    return( mSeat );
}

string Ticket::getEvent() const {
    return( mEvent );
}

string Ticket::getVenue() const {
    return( mVenue );
}

double Ticket::getPrice() const {
    return( mPrice );
}

void Ticket::setPrice(double price) {
    mPrice = price;
}

Ticket::KIND Ticket::getKind() const
{
    return( mKind );
}

string Ticket::getDayTime() const {
    return( mDayTime );
}
