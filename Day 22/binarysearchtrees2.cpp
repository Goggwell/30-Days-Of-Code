/*
Alternate solution
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
                return -1; //height of empty subtree is -1
            }
            int left = getHeight(root->left);
            int right = getHeight(root->right);
            return left > right ? 1 + left : 1 + right;

            //another way of writing the return statement:
            /*
            if(left > right)
            {
                return 1 + left;
            } else
            {
                return 1 + right;
            }
            */
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