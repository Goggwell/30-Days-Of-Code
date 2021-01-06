/*
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself.
Given a number, n, determine and print whether it is Prime or Not prime.

INPUT FORMAT:
The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines contains an integer, n, to be tested for primality.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;

        int prime = 1;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(n == 1)
        {
            cout << "Not prime" << endl;
        } else if(prime == 1)
        {
            cout << "Prime" << endl;
        } else
        {
            cout << "Not prime" << endl;
        }
        
        
    }
    return 0;
}