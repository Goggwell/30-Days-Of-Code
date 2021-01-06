#include <bits/stdc++.h>
using namespace std;

#define rowSize 2
#define colSize 4

int main()
{
    int count = 0;
    int arr[rowSize][colSize];

    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < colSize; j++, count++)
        {
            arr[i][j] = count;
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}