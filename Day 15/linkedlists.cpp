/*
Complete the insert function in your editor so that it creates a new Node (pass data as the Node
constructor argument) and inserts it at the tail of the linked list referenced by the head parameter.
Once the new node is added, return the reference to the head node.

Note: The head argument is null for an empty list.
*/

#include <bits/stdc++.h>
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
        Node* insert(Node *head, int data)
        {
            Node *newNode = new Node(data); //allocate Node with data
            if(head == NULL) //if linked list is empty, make the new node as head
            {
                head = newNode;
            }
            else //else traverse the list until the last node
            {
                Node *last = head;
                while(last->next != NULL)
                {
                    last = last->next;
                }
                last->next = newNode; //link the last node to newNode
            }
            return head;
        }

        void display(Node *head)
        {
            Node *start = head;
            while(start)
            {
                cout << start->data << " ";
                start = start->next;
            }
        }
};

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while(T --> 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}