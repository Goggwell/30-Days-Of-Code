/*
Given an array, a, of size n distinct elements, sort the array in ascending order using the
Bubble Sort algorithm.
Once sorted, print these 3 lines:
    1. Array is sorted in numSwaps swaps
        - where numSwaps is the number of swaps that took place
    2. First Element: firstElement
        - where firstElement is the first element in the sorted array
    3. Last Element: lastElement
        - where lastElement is the last element in the sorted array
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }

    int numSwaps = 0;

    for(int i = 0; i < n; i++)
    {
        int numberOfSwaps = 0; //Track number of elements swapped during a single array traversal

        for(int j = 0; j < n - 1; j++)
        { //swap adjacent elements if they are in decreasing order
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                numberOfSwaps++; //increments the tally inside the loop
                numSwaps++; //increments running tally of swaps that occur during execution
            }
        }

        if(numberOfSwaps == 0) //if no elements were swapped during a traversal, array is sorted
        {
            break;
        }
    }

    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
}