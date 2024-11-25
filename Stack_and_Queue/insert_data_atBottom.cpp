#include<iostream>
#include<stack>
using namespace std;


class Solution{
public:

void solve(stack<int> &st,int x)
{
    // base case
    if(st.empty())
    {
        st.push(x);
        return;
    }
    
    int a = st.top();
    st.pop();
    
    //recursive call
    solve(st,x);
    
    st.push(a);
}


    stack<int> insertAtBottom(stack<int> st,int x){
        solve(st,x);
        
        return st;
    }
};