/*
Given a 6 x 6 2D Array, A:
    - Calculate the hourglass sum for every hourglass in A, then print the max hourglass sum

Hourglass (letters replaced with numbers in the array):

a b c
  d
e f g


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for(int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for(int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int sum, max = 0;

    for(int i = 0; i < 4; i++) // 4 being how many hourglasses can fit into a row
    {
        for(int j = 0; j < 4; j++) // 4 being the hourglasses in a column
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + //sum split into rows for readability
                  arr[i + 1][j + 1] +
                  arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if(sum > max || i == 0 && j == 0)
            {
                max = sum;
            }
        }
    }
    cout << max;
    return 0;
}