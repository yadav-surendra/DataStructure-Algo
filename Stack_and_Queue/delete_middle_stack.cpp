#include<iostream>
#include<stack>;
using namespace std;

class Solution {
    void solve(stack<int>& s, int sizeOfStack, int count)
    {
        // base case
        if(count == sizeOfStack/2)
        {
            s.pop();
            return;
        }
        
        int a = s.top();
        s.pop();
        
        // make recursive call
        count++;
        solve(s,sizeOfStack,count);
        
        // push a after returning from base case.
        s.push(a);
    }
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s, int sizeOfStack) {
        
        // code here..
        int count = 0;
        solve(s,sizeOfStack,count);
    }
    
};