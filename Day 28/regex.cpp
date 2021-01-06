/*
Regular expressions for email:

"(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+" -> checks for any e-mail address
    1. The \w matches any character in any case any number of times
    2. Then the \.|_ matches if a dot or underscore is present 0 or 1 times
    3. Then \w again match n characters
    4. Then @ matches the @ in the email
    5. Then we check again for n characters and a '.' and a word after it, which must be present at
       least one or more times

"(\\w+)(\\.|_)?(\\w*)@(gmail)(\\.(com))" -> checks specifically for gmail
*/

// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <regex>
#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int main()
{
    vector<string> database;
    regex b("(\\w+)(\\.|_)?(\\w*)@(gmail)(\\.(com))");

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 0; i < N; i++)
    {
        // string name, email;
        // cin >> name;
        // cin >> email;

        string firstnameemail;
        getline(cin, firstnameemail);

        vector<string> firstem = split_string(firstnameemail);

        string name = firstem[0];
        string email = firstem[1];

        if(regex_match(email, b))
            database.push_back(name);
        else
            cout << "Invalid G-Mail Account!" << endl;
    }

    sort(database.begin(), database.end());

    for(auto x : database)
    {
        cout << x << endl;
    }
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}