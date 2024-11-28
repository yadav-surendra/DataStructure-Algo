#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        
        int n = q.size();
        int mid = n/2;
        
        queue<int> newQ;
        
        for(int i=0; i<mid; i++)
        {
            int val = q.front();
            newQ.push(val);
            q.pop();
        }
        
        while(!newQ.empty() && !q.empty())
        {
            int val1 = newQ.front();
            ans.push_back(val1);
            newQ.pop();
            
            int val2 = q.front();
            ans.push_back(val2);
            q.pop();
        }
        
        return ans;
        
    }
};

