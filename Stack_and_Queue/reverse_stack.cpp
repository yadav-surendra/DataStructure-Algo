#include<iostream>
#include<stack>
using namespace std;


class Solution{
public:

    void insertAtBottom(stack<int> &s, int element)
    {
        //Base case
        if(s.empty())
        {
            s.push(element);
            return;
        }
        
        int num = s.top();
        s.pop();
        
        insertAtBottom(s,element);
        
        s.push(num);
        
    }
    
    
    void Reverse(stack<int> &St){
        
      // base case
      if(St.empty())
      {
          return;
      }
      
      int num = St.top();
      St.pop();
      
      Reverse(St);
      
      insertAtBottom(St,num);
      
        
    }
};