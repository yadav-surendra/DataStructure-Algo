#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        deque<int> de;
        vector<int> ans;
        int n = arr.size();
        
        // process first window
        for(int i=0; i<k; i++)
        {
            if(arr[i] < 0)
            {
                de.push_back(i);
            }
        }
        
        // update ans array
        if(de.size() > 0)
        {
            ans.push_back(arr[de.front()]);
        }
        else
        {
            ans.push_back(0);
        }
        
        // update window
        for(int i=k; i<n; i++)
        {
            if(!de.empty() && (i-de.front()>=k))
            {
                de.pop_front();
            }
            
            if(arr[i] < 0)
            {
                de.push_back(i);
            }
            
            if(de.size() > 0)
            {
                ans.push_back(arr[de.front()]);
            }
            else
            {
                ans.push_back(0);
            }
            
        }
        
        return ans;
    }
};