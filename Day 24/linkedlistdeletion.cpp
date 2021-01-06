/*
Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the
head of the updated list.

NOTE: The head pointer may be NULL, indicating that the list is empty. Be sure to reset your 
next pointer when performing deletions to avoid breaking the list.
*/
#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};

class Solution
{
    public:
        Node* removeDuplicates(Node *head)
        {
            if(head==NULL)
            {
                return head;
            }

            Node* tmp = head;

            while(tmp->next != NULL)
            {
                if(tmp->data == tmp->next->data)
                {
                    tmp->next = tmp->next->next;
                } else
                {
                    tmp = tmp->next;
                }
                
            }
            return head;
        }

        Node* insert(Node *head, int data)
        {
            Node* newNode = new Node(data);
            if(head==NULL)
            {
                head=newNode;
            } else if(head->next==NULL)
            {
                head->next=newNode;
            } else
            {
                Node *start = head;
                while(start->next!=NULL)
                {
                    start=start->next;
                }
                start->next=newNode;
            }
            return head;
        }

        void display(Node* head)
        {
            Node *start = head;
            while(start)
            {
                cout << start->data << " ";
                start=start->next;
            }
        }
};

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T, data;
    cin>>T;
    while(T-->0)
    {
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

    mylist.display(head);
}