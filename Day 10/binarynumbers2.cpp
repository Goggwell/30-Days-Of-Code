/*
Alternate solution by creating a function which makes use of the ternary operator
*/

#include <bits/stdc++.h>
using namespace std;

int ternary(int max, int count)
{
    return max > count ? max : count;
}

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int count = 0;

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
            max = ternary(max, count);
        } else
        {
            count = 0;
        }
        n /= 2;
    }
    cout << max;
    return 0;
}