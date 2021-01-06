/*
You are given a pointer, root, pointing to the root of a binary search tree. Complete the 
levelOrder function provided in your editor so that it prints the level-order traversal of the
binary search tree.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left,*right;
        Node(int d)
        {
            data=d;
            left=right=NULL;
        }
};

class Solution
{
    public:
  		Node* insert(Node* root, int data)
          {
            if(root==NULL)
            {
                return new Node(data);
            } else
            {
                Node* cur;
                if(data<=root->data)
                {
                    cur=insert(root->left,data);
                    root->left=cur;
                } else
                {
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root)
    {
        queue<Node *> q; //declare a queue, which takes Node* as data type
        if(root != NULL) //if root is not empty 
        {
            q.push(root); //enqueue current root
            while(!q.empty()) //while the queue is not empty
            {
                Node* child = q.front(); //process tree's root
                cout << child->data << " "; //prints current node's data
                if(child->left != NULL) //if tree has non-empty left subtree
                {
                    q.push(child->left); //enqueue left subtree of root
                }
                if(child->right != NULL) //if tree has non-empty right subtree
                {
                    q.push(child->right); //enqueue right subtree of root
                }
                q.pop(); //dequeue next node
            }
        }
	}

};

int main()
{
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0)
    {
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}