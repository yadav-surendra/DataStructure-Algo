#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution
{
    public:
    void flatten(Node *root)
    {
        //code here
        Node* curr = root;
        while(curr!=NULL)
        {
            
            //check if left exists or not
            if(curr->left)
            {
                Node* pred = curr->left;
                while(pred->right)
                {
                    pred = pred->right;
                }
                
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr=curr->right;
        }
        
        // left part ko nULL karo
        // curr= root;
        // while(curr != NULL)
        // {
        //     curr->left = NULL;
        //     curr = curr->right;
        // }
        
    }
};