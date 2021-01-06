/*
Complete the implementation of the Calculator class, which implements the AdvancedArithmetic interface.
The implementation for the divisorSum(n) method must return the sum of all divisors of n.
*/

#include <bits/stdc++.h>
using namespace std;

class AdvancedArithmetic
{
    public:
        virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic
{
    public:
        int divisorSum(int n)
        {
            vector<int> arr;
            int result = 0;

            for(int i = 1; i <= n; i++)
            {
                if(n % i == 0)
                {
                    arr.push_back(i);
                }
            }

            result = accumulate(arr.begin(), arr.end(), 0);

            return result;
        }
};

int main()
{
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: Advanced Arithmetic\n" << sum;
    return 0;
}