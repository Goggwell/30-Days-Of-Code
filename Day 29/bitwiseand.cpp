//Solution to Bitwise AND | Day 29, pushing values into vector & sorting takes too long

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    //vector<int> bit;
    int max = 0;

    for(int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;

        for(int j = 1; j <= n; j++)
        {
            for(int l = n; l > j; l--)
            {
                int x = j & l;
                if(x < k && x > max)
                {
                    //bit.push_back(x);
                    max = x;
                }
            }
        }
        // sort(bit.begin(), bit.end());
        // cout << bit[bit.size() - 1] << endl;
        // bit.clear();
        cout << max << endl;
        max = 0;
    }
}