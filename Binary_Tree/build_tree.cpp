#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

node* buildTree(node* root)
{
    // create node.
    int d;
    cout<<"Enter the data:"<<endl;
    cin>>d;
    root = new node(d);

    if(d == -1)
       return NULL;

    cout<<"Enter data to insert at left of "<<d<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data to insert at right of "<<d<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node* root = NULL;

    buildTree(root);

    return 0;
}