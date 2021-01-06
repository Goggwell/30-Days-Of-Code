/*
Can you determine if a given string, s, is a palindrome?
Write the following declarations and implementations:
    - Two instance variables: one for your stack, and one for your queue
    - A void pushCharacter(char ch) method that pushes a character onto a stack
    - A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable
    - A char popCharacter() method that pops and returns the character at the top of the stack instance variable
    - A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        stack<int> s; //declare stack s
        queue<int> q; //declare queue q

        void pushCharacter(char ch)
        {
            s.push(ch); //pushes char ch onto stack
        }

        void enqueueCharacter(char ch)
        {
            q.emplace(ch); //enqueues char ch in queue q
        }

        char popCharacter()
        {
            char popch = s.top();
            s.pop(); //deletes top most element of stack s
            return popch; //returns top most element of stack s
        }

        char dequeueCharacter()
        {
            char queuech = q.front();
            q.pop(); //deletes first element of queue q
            return queuech; //returns first element of queue q
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