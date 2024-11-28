#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        queue<char> q;
        map<char,int> count;
        string ans = "";
        
        for(int i=0; i<s.length(); i++)
        {
            
            char ch = s[i];
            q.push(ch);
            count[ch]++;
            
            while(!q.empty())
            {
                if(count[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            
            if(q.empty())
            {
                ans.push_back('#');
            }
            
        }
        return ans;
        
    }
};

