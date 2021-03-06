/*
Write a Calculator class with a single method: int power(int,int). The power method takes two integers,
n and p, as parameters and returns the integer result of nᵖ. If either n or p is negative, then the
method must throw an exception with the message: n and p should be non-negative.

Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
*/

#include <bits/stdc++.h>
using namespace std;

class Calculator
{
    public:
        int power(int n, int p)
        {
            if(n < 0 || p < 0)
            {
                throw invalid_argument("n and p should be non-negative");
            }

            return pow(n, p);
        }
};

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while(T-->0)
    {
        if(scanf("%d %d",&n,&p)==2)
        {
            try
            {
                int ans=myCalculator.power(n,p);
                cout<<ans<<endl;
            }
            catch(exception& e)
            {
                cerr << e.what() << '\n';
            }
            
        }
    }
}