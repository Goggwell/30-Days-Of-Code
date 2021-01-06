#include <bits/stdc++.h>
using namespace std;

#define rowSize 2
#define colSize 4

int arr[rowSize][colSize];
int arr2[rowSize * colSize];
int n, m, o, p;

int main()
{
    //multidimensional array (usage of a bidimensional array)
    for(n = 0; n < rowSize; n++)
    {
        for(m = 0; m < colSize; m++)
        {
            arr[n][m] = (n+1) * (m+1);
            cout << arr[n][m] << " ";
        }
        cout << '\n';
    }

    cout << '\n';
    cout << '\n';

    //pseudo-multidimensional array (usage of a simple array)
    for(o = 0; o < rowSize; o++)
    {
        for(p = 0; p < colSize; p++)
        {
            arr2[o * colSize + p] = (o+1) * (p+1);
            cout << arr2[o * colSize + p] << " ";
        }
        cout << '\n';
    }
}