/*
Given an array, A, of N integers, print A's elements in reverse order as a single line of 
space-separated numbers

== NOTE ON ARRAYS IN C++ ==
If you want to create an array whose size is unknown at compile-time(i.e. being read as input),
you need to create a pointer to whatever data type you'll be declaring your array as
(e.g. char, int, double, etc.). Then you must use the new operator to set aside the space you need
for your array.

Note that you can use vectors in place of arrays for these situations, however for the purposes of
the 30 Days of Code course, we will be using this instead. 

== EXAMPLE ==
//array size
int n;
cin >> n;

//create array of unknown size n
int* arrayName = new int[n];
char* arrayNameTwo = new char[n];
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int* A = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = n - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
}