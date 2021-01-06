/*
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective
phone numbers. You will then be given an unknown number of names to query your phone book for.
For each name queried, print the associated entry from your phone book on a new line in the form
name=phoneNumber; if an entry for name is not found, print 'Not Found' instead.

Note: Your phone book should be a Dictionary/Map/HashMap data structure
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    map<string, int> phoneBook;

    string name;
    int number;

    int entries;
    cin >> entries;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 0; i < entries; i++)
    {
        cin >> name >> number;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        phoneBook[name] = number;
    }

    while(cin >> name)
    {
        if(phoneBook.find(name) != phoneBook.end())
        {
            cout << name << "=" << phoneBook.find(name)->second << endl;
        } else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}