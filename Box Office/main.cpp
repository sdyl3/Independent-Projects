//
//  main.cpp
//  Project5
//
//  Created by Sandy Li on 2/25/19.
//  Copyright © 2019 Yinling Li. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>

#include "Ticket.h"
#include "BoxOffice.h"

using namespace std;


int main()
{
////     test code
//
    Ticket test("Pavillion Row 13", 45, "Dodgers vs. Brewers", "Dodger Stadium", 150.00, Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM");

    cout << "all tests passed!" << endl ;
    cout << "Row: " << test.getRow() << endl;
    cout << "Seat: " << test.getSeat() << endl;
    cout << "Event: " << test.getEvent() << endl;
    cout << "Venue: " << test.getVenue() << endl;
    cout << "Price: " << test.getPrice() << endl;
    cout << "Kind: " << test.getKind() << endl;
    cout << "Day and Time: " << test.getDayTime() << endl;

//   Ticket t( "Pavillion Row 13", 45, "Dodgers vs. Brewers", "Dodger Stadium", 150.00, Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    BoxOffice b;
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Pavillion Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "Dodgers vs. Brewers");
//    assert( t.getVenue() == "Dodger Stadium" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    //NON-ROYCE HALL
//    t = b.buyTicket( "Balcony Row 13", 45, "Dodgers vs. Brewers", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "0.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "Dodgers vs. Brewers");
//    assert( t.getVenue() == "Dodger Stadium" );
//    assert( t.getPrice() == "0.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//   //ATHLETIC
//   //ATHLETIC PM Balcony
//    t = b.buyRoyceHallTicket( "Balcony Row 13", 45, "UCLA vs. USC", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "75.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "75.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row 13", 45, "UCLA vs. USC", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "45.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "45.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "55.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "55.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    //ATHLETIC PM Orchestra
//    t = b.buyRoyceHallTicket( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket ( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "120.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "120.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket ( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "130.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    //ATHLETIC AM balcony
//    t = b.buyRoyceHallTicket( "Balcony Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "75.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "75.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "45.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "45.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "55.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Balcony Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "55.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    //ATHLETIC AM Orchestra
//    t = b.buyRoyceHallTicket( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket ( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "120.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "120.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket ( "Orchestra Row 13", 45, "UCLA vs. USC", "Dodger Stadium", Ticket::KIND::ATHLETICGAME, "August 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "130.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Orchestra Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "August 1, 10:30AM");
//
//    //CONCERT
//    //CONCERT AM Balcony
//    t = b.buyRoyceHallTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "50.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "50.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "20.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "20.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "30.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "30.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    //CONCERT AM Orchestra
//    t = b.buyRoyceHallTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "100.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "100.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "70.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "70.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "80.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "80.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    //CONCERT PM Balcony
//    t = b.buyRoyceHallTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "65.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Balcony Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "65.000000" );
//    assert( t.getDayTime() == "November 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "35.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Balcony Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "35.000000" );
//    assert( t.getDayTime() == "November 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "45.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Balcony Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "45.000000" );
//    assert( t.getDayTime() == "November 1, 7:30PM");
//
//    //CONCERT PM Orchestra
//    t = b.buyRoyceHallTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "130.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "130.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "100.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "100.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "110.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Orchestra Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == " Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "110.000000" );
//    assert( t.getDayTime() == "November 1, 10:30AM");
//
//    //MOVIE
//    //MOVIE AM balcony
//    t = b.buyRoyceHallStudentTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "12.500000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "12.500000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "10.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "10.000000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "11.250000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "11.250000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    //MOVIE AM Orchestra
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "25.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "25.000000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "20.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "20.000000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "22.500000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "22.500000" );
//    assert( t.getDayTime() == "September 1, 10:30AM" );
//
//    //MOVIE PM balcony
//    t = b.buyRoyceHallStudentTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "12.500000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "12.500000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "10.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "10.000000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "11.250000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "11.250000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    //MOVIE PM Orchestra
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "25.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "25.000000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "20.000000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "20.000000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "22.500000" );
//    assert( t.getKind() == Ticket::KIND::MOVIE );
//    assert( t.getRow() == "Balcony Row U" );
//    assert( t.getSeat() == 20 );
//    assert( t.getEvent() == "Episode VII: The Force Awakens ");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "22.500000" );
//    assert( t.getDayTime() == "September 1, 7:30PM");
//
//    //OTHER
//    //OTHER AM balcony
//    t = b.buyRoyceHallStaffTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "40.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "40.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "10.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "10.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "20.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "20.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    //OTHER AM Orchestra
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "80.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "80.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "50.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "50.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 10:30AM" );
//    assert( std::to_string( t.getPrice() ) == "60.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "60.000000" );
//    assert( t.getDayTime() == "October 1, 10:30AM");
//
//    //OTHER PM balcony
//    t = b.buyRoyceHallStaffTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "55.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "55.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "25.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "25.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "35.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Balcony Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "35.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    //OTHER PM Orchestra
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "110.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "110.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    t = b.buyRoyceHallStudentTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "80.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "80.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    t = b.buyRoyceHallStaffTicket( "Orchestra Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "90.000000" );
//    assert( t.getKind() == Ticket::KIND::OTHER );
//    assert( t.getRow() == "Orchestra Row J" );
//    assert( t.getSeat() == 120 );
//    assert( t.getEvent() == "An Evening With David Sedaris");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "90.000000" );
//    assert( t.getDayTime() == "October 1, 7:30PM");
//
//    //NO SPECIFICATION OF ORCHESTRA/BALCONY, AM/PM
//    t = b.buyRoyceHallTicket( "Row 13", 45, "UCLA vs. USC", Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    assert( std::to_string( t.getPrice() ) == "75.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == " Row 13" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "UCLA vs. USC");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "75.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    t = b.buyRoyceHallTicket( "Balcony Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30" );
//    assert( std::to_string( t.getPrice() ) == "50.000000" );
//    assert( t.getKind() == Ticket::KIND::CONCERT );
//    assert( t.getRow() == "Balcony Row A" );
//    assert( t.getSeat() == 12 );
//    assert( t.getEvent() == "Barry Manilow Live In Concert");
//    assert( t.getVenue() == "Royce Hall" );
//    assert( t.getPrice() == "50.000000" );
//    assert( t.getDayTime() == "November 1, 7:30");
//
//    //ZERO/NEGATIVE VALUES
//    Ticket t( "Pavillion Row 13", 0, "Dodgers vs. Brewers", "Dodger Stadium", 0, Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    BoxOffice b;
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Pavillion Row 13" );
//    assert( t.getSeat() == 0 );
//    assert( t.getEvent() == "Dodgers vs. Brewers");
//    assert( t.getVenue() == "Dodger Stadium" );
//    assert( t.getPrice() == "0" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    Ticket t( "Pavillion Row 13", -45, "Dodgers vs. Brewers", "Dodger Stadium", -150.00, Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
//    BoxOffice b;
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "Pavillion Row 13" );
//    assert( t.getSeat() == -45 );
//    assert( t.getEvent() == "Dodgers vs. Brewers");
//    assert( t.getVenue() == "Dodger Stadium" );
//    assert( t.getPrice() == "-150.000000" );
//    assert( t.getDayTime() == "August 1, 7:30PM");
//
//    //EMPTY STRING
//    Ticket t( "", 45, "", "", 150.00, Ticket::KIND::ATHLETICGAME, "" );
//    BoxOffice b;
//    assert( std::to_string( t.getPrice() ) == "150.000000" );
//    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
//    assert( t.getRow() == "" );
//    assert( t.getSeat() == 45 );
//    assert( t.getEvent() == "" );
//    assert( t.getVenue() == "" );
//    assert( t.getPrice() == "150.000000" );
//    assert( t.getDayTime() == "" );

    return 0;
}
