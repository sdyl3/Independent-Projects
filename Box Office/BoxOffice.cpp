//  BoxOffice.cpp

//#include <iostream>
//#include <string>

#include "Ticket.h"
#include "BoxOffice.h"
#include "Project5Helper.h"
using namespace std;

Ticket BoxOffice::buyTicket(string row, int seat, string event, string venue, Ticket::KIND kind, string daytime)
{
    Ticket soldTicket(row, seat, event, venue, 0, kind, daytime);
    return soldTicket;
};

Ticket BoxOffice::buyRoyceHallTicket(string row, int seat, string event, string venue, Ticket::KIND kind, string daytime)
{
    Project5Helper tester;
    Ticket soldTicket = buyTicket(row, seat, event, "Royce Hall", kind, daytime);
    double price = 0;

    if (kind == Ticket::ATHLETICGAME)
    {
        price = 75.00; //   general price for everyone
    }
    if (kind == Ticket::CONCERT)
    {
        if(tester.endsWithPM(daytime))
        {
            price = 65.00; //   scheduled in PM
        }
        else price = 50.00; // scheduled in AM
    }
    if (kind == Ticket::MOVIE)
    {
        price = 12.50;
    }
    if (kind == Ticket::OTHER)
    {
        if(tester.endsWithPM(daytime))
        {
            price = 55.00; //   scheduled in PM
        }
        else price = 40.00; // scheduled in AM
    }
    if (tester.startsWithOrchestra(row) == true)
    {
        price *= 2; //  Orchestra seats cost twice as much as balcony prices
    }

    soldTicket.setPrice(price);
    return soldTicket;
}

Ticket BoxOffice::buyRoyceHallStudentTicket(string row, int seat, string event, string venue, Ticket::KIND kind, string daytime)
{
    Project5Helper tester;
    Ticket soldTicket = buyRoyceHallTicket(row, seat, event, "Royce Hall", kind, daytime);
    double price = soldTicket.getPrice();

    if(price >= 40.00)
    {
        price -= 30.00; //  $30 off tickets costing $40 or more
    }
    else price *= 0.8; //   20% off

    soldTicket.setPrice(price);
    return soldTicket;
}

Ticket BoxOffice::buyRoyceHallStaffTicket(string row, int seat, string event, string venue, Ticket::KIND kind, string daytime)
{
    Project5Helper tester;
    Ticket soldTicket = buyRoyceHallTicket(row, seat, event, "Royce Hall", kind, daytime);
    double price = soldTicket.getPrice();
    
    if(price >= 40.00)
    {
        price -= 20.00; //    $20 off tickets costing $40 or more
    }
    else price *= 0.9; //   10% off
    
    soldTicket.setPrice(price);
    return soldTicket;
}
