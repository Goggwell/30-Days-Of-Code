/*
Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer
denoting the maximum number of consecutive 1's in n's binary representation.
When working with different bases, it is common to show the base as a subscript.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    int max = 0;
    int count = 0;

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
        } else
        {
            count = 0;
        }

        if(max < count)
        {
            max = count;
        }

        n /= 2;
        
    }

    cout << max;
    return 0;
}