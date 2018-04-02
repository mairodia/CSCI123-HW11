// =================================================================================
// File: namestrings.cpp
// =================================================================================
// Programmer: Jennifer King
// Date: 4/2/2018
// Project: Name Strings
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30AM
// Description:
//      This program prompts the user for a first, middle, and last name. The name
//      components are compared to see if any of them are identical, and if they are,
//      an appropriate message is displayed to stdout.
// =================================================================================
#include <iostream>
#include <cstring>
using namespace std;

int LEN = 50;

int main()
{
    char first[LEN];
    char middle[LEN];
    char last[LEN];

    cout << "Please enter your first name: ";
    cin.getline(first, LEN);

    cout << "Please enter your middle name: ";
    cin.getline(middle, LEN);

    cout << "Please enter your last name: ";
    cin.getline(last, LEN);

    char fullName[150];

    strcpy (fullName, first);
    strcat (fullName, " ");
    strcat (fullName, middle);
    strcat (fullName, " ");
    strcat (fullName, last);

    cout << "Your full name is: " << fullName << endl;
    cout << "The total number of characters in your name is: ";
    cout << strlen(first) + strlen(middle) + strlen(last) << endl;

    if(0 == strcmp(first, middle))
    {
        cout << "The first and middle names are the same." << endl;
    }
    if(0 == strcmp(first, last))
    {
        cout << "The first and last names are the same." << endl;
    }
    if(0 == strcmp(middle, last))
    {
        cout << "The middle and last names are the same." << endl;
    }

    return 0;
}
