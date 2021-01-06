/*
A number of ways to convert base-10 integers to base-2 integers
*/

#include <bits/stdc++.h>
using namespace std;

// making use of arithmetic operators
void decToBinary(int n)
{
    // array to store binary number, assuming size of integer is 32 bits
    int binaryNum[32];

    int i = 0;
    while(n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    //printing the array in reverse order
    for(int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}

// making use of bitwise operators
void deciToBinary(int n)
{
    // Size of integer is assumed to be 32 bits
    for(int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    cout << endl;
}

// conversion without arrays
int decimToBinary(int n)
{
    unsigned long long int B_Number = 0;
    int count = 0;
    while (n != 0)
    {
        int rem = n % 2;
        unsigned long long int c = pow(10, count);
        B_Number += rem * c;
        n /= 2;

        count++;
    }
    return B_Number;
}

// making use of bitset
string decimalToBinary(int n)
{
    //finds the binary form of number and converts to string
    string str = bitset<8>(n).to_string();

    //Finds the first occurence of '1' and strips off the leading zeroes
    const auto loc1 = str.find('1');

    if(loc1 != string::npos)
    {
        return str.substr(loc1);
    }
    return "0";
}

int main()
{
    int n;
    cin >> n;

    decToBinary(n);
    deciToBinary(n);
    cout << decimToBinary(n) << endl;
    cout << decimalToBinary(n) << endl;

    //another use of bitset but with the leading zeroes
    string binary = bitset<8>(n).to_string();
    cout << binary << endl;
}