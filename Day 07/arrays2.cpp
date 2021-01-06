/*
Alternate solution to arrays problem using the built-in reverse function
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int* A = new int[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
    }

    reverse(A, A + n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}