#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string str;
    
    cin >> a;
    cin >> b;
    cin.get();
    getline(cin, str);
    
    cout << i + a << endl;
    cout << setprecision(1) << fixed << d + b << endl;
    cout << s + str;

    return 0;
}