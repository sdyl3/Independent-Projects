// Code for Project 2
// Yinling Li

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kind;
    string meal;
    string type;
    string resident;
    
    cout << "Ticket or BruinCard? ";
    getline (cin, kind);
  
    if (kind == "Ticket" || kind == "BruinCard")
    {
        cout << "Breakfast, Lunch or Dinner? ";
        getline (cin, meal);
        
        if (kind == "Ticket" && meal == "Breakfast")
        {
            cout << "Thank you for eating at UCLA today.  Your meal cost is $12.50." << endl;
            return 0;
        }
        if (kind == "Ticket" && meal == "Lunch")
        {
            cout << "Thank you for eating at UCLA today.  Your meal cost is $14.50." << endl;
            return 0;
        }
        if (kind == "Ticket" && meal == "Dinner")
        {
            cout << "Thank you for eating at UCLA today.  Your meal cost is $17.00." << endl;
            return 0;
        }
        if (kind == "BruinCard" && (meal == "Breakfast" || meal == "Lunch" || meal == "Dinner"))
        {
            cout << "Student or Staff? ";
            getline (cin, type);
            
            if (type == "Student")
            {
                cout << "Resident? ";
                getline (cin, resident);
                
                if (meal == "Breakfast" && type == "Student" && resident == "Yes" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $9.75." << endl;
                    return 0;
                }
                if (meal == "Breakfast" && type == "Student" && resident == "No" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $10.00." << endl;
                    return 0;
                }
                if (meal == "Lunch" && type == "Student" && resident == "Yes" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $11.25" << endl;
                    return 0;
                }
                if (meal == "Lunch" && type == "Student" && resident == "No" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $11.75." << endl;
                    return 0;
                }
                if (meal == "Dinner" && type == "Student" && resident == "Yes" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $12.25." << endl;
                    return 0;
                }
                if (meal == "Dinner" && type == "Student" && resident == "No" )
                {
                    cout << "Thank you for eating at UCLA today.  Your meal cost is $12.75." << endl;
                    return 0;
                }
                else
                {
                    cout << "The resident value must either be Yes or No. ";
                    return 0;
                }
            }
            if (meal == "Breakfast" && type == "Staff")
            {
                cout << "Thank you for eating at UCLA today.  Your meal cost is 11.25." << endl;
                return 0;
            }
            if (meal == "Lunch" && type == "Staff")
            {
                cout << "Thank you for eating at UCLA today.  Your meal cost is 12.75." << endl;
                return 0;
            }
            if (meal == "Dinner" && type == "Staff")
            {
                cout << "Thank you for eating at UCLA today.  Your meal cost is 14.75." << endl;
                return 0;
            }
            else
            {
                cout << "The type value must either be Student or Staff. " << endl;
                return 0;
            }
        }
        else
        {
            cout << "The meal value must either be Breakfast, Lunch or Dinner. " << endl;
            return 0;
        }
    }
    else
    {
        cout << "The kind value must either be Ticket or Bruincard. " << endl;
    }
    return 0;
}
