//
//  bill.cpp
//  Project 2
//
//  Created by Yinling Li on 4/15/19.
//  Copyright © 2019 Yinling Li. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initial meter reading
    cout << "Initial meter reading: ";
    double initialMeter;
    cin >> initialMeter;
    cin.ignore(10000, '\n');
    
    if (initialMeter < 0)
    {
        cout << "---" << endl;
        cout << "The initial meter reading must be nonnegative." << endl;
        return 1;
    }
    
    // final meter reading
    cout << "Final meter reading: ";
    double finalMeter;
    cin >> finalMeter;
    cin.ignore(10000, '\n');
    
    if (finalMeter < initialMeter)
    {
        cout << "---" << endl;
        cout << "The final meter reading must be at least as large as the initial reading." << endl;
        return 1;
    }
    
    // customer name
    cout << "Customer name: ";
    string customer;
    getline(cin, customer);
    if (customer.empty())   // empty string
    {
        cout << "---" << endl;
        cout << "You must enter a customer name." << endl;
        return 1;
    }
    
    // month number
    cout << "Month number (1=Jan, 2=Feb, etc): ";
    int month = 0;
    cin >> month;
    if (month < 1 || month > 12)
    {
        cout << "---" << endl;
        cout << "The month number must be in the range 1 through 12." << endl;
        return 1;
    }

    // include 2 decimal points
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    //  calculates bill
    int tier = finalMeter - initialMeter;
    double amount = 0;
    
    // high usage season (April through October)
    if (month == 4 || month == 5 || month == 6 || month == 7 || month == 8 || month == 9 || month == 10)
    {
        if (tier <= 43)
            amount += tier * 2.71;   // first tier rate for the first 43 HCF
        else
            amount += (43 * 2.71) + ((tier - 43) * 3.39);  // second tier rate beyond 43 HCF
    }
    
    //  low usage season (November through March)
    else
    {
        if (tier <= 29)
            amount += tier * 2.71;    // first tier rate for the first 29 HCF
        else
            amount += (29 * 2.71) + ((tier - 29) * 2.87);    // second tier rate beyond 29 HCF
    }
    cout << "---" << endl;
    cout << "The bill for " << customer << " is $" << amount << endl;
    return 1;
}
