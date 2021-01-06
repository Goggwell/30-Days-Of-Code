//Same solution but without using stack and queue STL

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
    public:
        vector<char> s;
        vector<char> q;

        void pushCharacter(char ch)
        {
            s.push_back(ch);
        }

        void enqueueCharacter(char ch)
        {
            auto it = q.begin();
            it = q.insert(it, ch);
        }

        char popCharacter()
        {
            char stackLast;
            stackLast = s[s.size() - 1];
            s.pop_back();
            return stackLast;
        }

        char dequeueCharacter()
        {
            char queueLast = q[q.size() - 1];
            q.pop_back();
            return queueLast;
        }
};

int main()
{
    //read the string s
    string s;
    getline(cin, s);

    //create the Solution class object p
    Solution obj;

    //push/enqueue all the characters of string s to stack
    for(int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    //pop the top character from stack
    //dequeue the first character from queue
    //compare both characters
    for(int i = 0; i < s.length() / 2; i++)
    {
        if(obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    //finally print whether string s is palindrome or not
    if(isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome.";
    } else
    {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;

}