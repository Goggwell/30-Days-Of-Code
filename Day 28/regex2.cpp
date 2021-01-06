//Solution I submitted to HackerRank

#include <bits/stdc++.h>
#include <regex>

using namespace std;


int main()
{
    vector<string> database;
    regex b("(\\w+)(\\.|_)?(\\w*)@(gmail)(\\.(com))");
    
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int N_itr = 0; N_itr < N; N_itr++) 
    {
        string name, email;
        cin >> name >> email;
        
        if(regex_match(email, b))
            database.push_back(name);
    }
    
    sort(database.begin(), database.end());
    
    for(auto x : database)
    {
        cout << x << endl;
    }
}