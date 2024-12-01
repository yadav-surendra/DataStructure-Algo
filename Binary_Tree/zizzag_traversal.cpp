#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> zigzagTraversal(Node* root)
    {
        vector<int> ans;

        if(root == NULL)
        return ans;

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp(size);

            //level processing
            for(int i=0; i<size; i++)
            {
                Node* frontnode = q.front();
                q.pop();

                int index = leftToRight ? i : size - i - 1;
                temp[index] = frontnode -> data;

                if(frontnode -> left)
                    q.push(frontnode->left);

                if(frontnode -> right)
                    q.push(frontnode->right);
            }

            // after processing each level change the direction
            leftToRight = ! leftToRight;

            for(auto i: temp)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};