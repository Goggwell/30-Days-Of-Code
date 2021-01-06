#include <bits/stdc++.h>
using namespace std;

static int nTimesK(int n, int k)
{
    if(n > 1) // recursive case
    {
        return k + nTimesK(n - 1, k);
    } else // base case
    {
        return k;
    }
    
}

int main()
{
    int n;
    int k;

    cout << "Enter two numbers you would like to multiply:\n";
    cin >> n;
    cin >> k;

    int result = nTimesK(n, k);
    cout << "The result is: " << result << endl;
}