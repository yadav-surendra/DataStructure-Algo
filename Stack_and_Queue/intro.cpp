#include<stack>
#include<iostream>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Element at top of the stack is "<<s.top()<<endl;

    s.pop();

    if(s.empty())
    {
        cout<<"The stack is empty."<<endl;
    }
    else{
        cout<<"The stack is not empty."<<endl;
    }

    cout<<"The size of stack is "<<s.size()<<endl;

// printing the stack
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}