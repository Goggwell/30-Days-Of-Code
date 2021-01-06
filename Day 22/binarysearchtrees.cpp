/*
~ BINARY SEARCH TREE (BST) ~
A binary tree that is either empty or satisfies the following conditions:
    1. Each element in the left sub-tree of a BST is less than or equal to the root element of the BST
        - (i.e. max(leftTree(t).value) <= t.value) where t is the name of a BST
    2. Each element in the right sub-tree of t is greater than the root element of t
        - (i.e. min(rightTree(t).value) > t.value)
    3. Both leftTree(t) and rightTree(t) are BSTs

~ TASK ~
The height of a binary search tree is the number of edges between the tree's root and its furthest
leaf, or technically speaking, 1 + max(height(leftSubtree), height(rightSubtree))

Recursively, it would be: 
height(t) = 1 + (max(height(root.leftChild), height(root.rightChild))) 

You are given a pointer, root, pointing to the root of a binary search tree. 

Complete the getHeight function provided in your editor so that it returns the height of a binary 
search tree.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        Node (int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution
{
    public:
        Node* insert(Node* root, int data)
        {
            if(root == NULL)
            {
                return new Node(data);
            } else
            {
                Node* cur;
                if(data <= root->data)
                {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else
                {
                    cur = insert(root->right, data);
                    root->right = cur;
                }
                return root;
            }
        }

        int getHeight(Node* root)
        {
            if(root == NULL)
            {
                return 0;
            }
            if(root->left == NULL && root->right == NULL)
            {
                return 0;
            }
            return 1 + (max(getHeight(root->left), getHeight(root->right)));
        }
};

int main()
{
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;
}