/*
Alternate solution: The Brute Force/Naive Approach
*/

#include <bits/stdc++.h>
using namespace std;

class Difference
{
    private:
        vector<int> elements;

    public:
        int maximumDifference;
        Difference(vector<int> __elements)
        {
            this->elements = __elements;
        }
        void computeDifference()
        {
            for(int i = 0; i < elements.size(); i++)
            {
                for(int j = 0; j < elements.size(); j++)
                {
                    if(abs(elements[i] - elements[j]) > maximumDifference)
                    {
                        maximumDifference = abs(elements[i] - elements[j]);
                    }
                }
            }
        }
};

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for(int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}