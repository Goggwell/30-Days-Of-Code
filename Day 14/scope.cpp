/*
Complete the Difference class by writing the following:
    - A class constructor that takes an array of integers as a parameter and saves it to
      the __elements instance variable
    - A computeDifference method that finds the maximum absolute difference between any 2 numbers
      in __elements and stores it in the maximumDifference instance variable
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
            sort(elements.begin(), elements.end());
            maximumDifference = abs(elements.back() - elements.front());
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