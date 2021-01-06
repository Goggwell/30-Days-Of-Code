/*
Alternate solution if phone number includes + symbol
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> phoneBook;

    string name;
    string num;

    int entries;
    cin >> entries;
    cin.ignore();

    for(int i = 0; i < entries; i++)
    {
        cin >> name >> num;
        cin.ignore();

        phoneBook[name] = num;
    }

    while(cin >> name)
    {
        auto lookup = phoneBook.find(name);
        if(phoneBook.find(name) != phoneBook.end())
        {
            cout << lookup->first << "=" << lookup->second << endl;
        } else
        {
            cout << "Not found" << endl;
        }
        
    }
    return 0;
}