#include<bits/stdc++.h>
using namespace std;


class Solution{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n)
    {
        if(M[a][b] == 1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        //step1: push all the element index to the stack
        for(int i=0; i<n; i++)
        {
            st.push(i);
        }

        //step2: teke two element from the stack and compare them.
        while (st.size() > 1)
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            // if a knows b then push a in the stack.
            if (knows(M, a, b, n))
            {
                st.push(b);
            }
            else
            {
                st.push(a);
            }
        }
        int ans = st.top();

        //single element in the stack is the potential celebrity. so verify it.
        //first case verification.
        int zeroCount = 0;
        for(int i=0; i<n; i++)
        {
            if(M[ans][i] == 0)
            zeroCount++;
        }

        if(zeroCount != n)
        return -1;

        // second case verification.
        int oneCount = 0;
        for(int i=0; i<n; i++)
        {
            if(M[i][ans] == 1)
            oneCount++;
        }

        if(oneCount != n-1)
        return -1;

     return ans;
    }
   
};