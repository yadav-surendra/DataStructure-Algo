#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    void reverse(queue<int> &q)
    {
        // base case
        if(q.size() == 1)
        {
            return;
        }
        
        int a = q.front();
        q.pop();
        
        // recursive call
        reverse(q);
        
        q.push(a);
        
        //return q;
    }
    
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
         reverse(q);
         return q;
    }
};
