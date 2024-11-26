#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int> st;
        vector<int> ans(n, -1);
        
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            
            while(!st.empty() && st.top()>=curr)
            st.pop();
            
            if(!st.empty())
            ans[i]=st.top();
            
            st.push(curr);
                
        }
        
        return ans;
    } 
};