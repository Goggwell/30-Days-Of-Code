/*
Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    try
    {
        stoi(S);
        cout << S << endl;
    } catch(...)
    {
        cout << "Bad String" << endl;
    }
    return 0;
}