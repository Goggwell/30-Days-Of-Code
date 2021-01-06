/*
Given a string, S, of length N that is indexed from 0 to N - 1, print its even-indexed and
odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more
detail).

Note: 0 is considered to be an even index.

== Example ==

s = adbecf
Print abc def

== INPUT FORMAT ==
The first line contains an integer, T (the number of test cases)
Each line i of the T subsequent lines contain a string, S
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT.
    int T;
    cin >> T;   

    for(int i = 0; i < T; i++)
    {
        string str;
        cin >> str;

        for(int j = 0; j < str.size(); j++)
        {
            if(j % 2 == 0)
            {
                cout << str[j];
            }
        }

        cout << " ";

        for(int j = 0; j < str.size(); j++)
        {
            if(j % 2 != 0)
            {
                cout << str[j];
            }
        }

        cout << endl;
    }

    return 0;
}