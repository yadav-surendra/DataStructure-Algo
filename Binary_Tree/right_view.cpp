#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node* root, vector<int> &ans, int level) {
    //base case
    if(root == NULL)
        return ;
       
    //we entered into a new level    
    if(level == ans.size())
        ans.push_back(root->data);
        
    solve(root->right, ans, level+1);    
    solve(root->left, ans, level+1);
    
}
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        solve(root, ans, 0);
        return ans;
    }
};


