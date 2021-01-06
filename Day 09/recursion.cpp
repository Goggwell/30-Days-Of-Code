#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n - 1);
    } else
    {
        return n;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    cout << result << "\n";

    return 0;
}