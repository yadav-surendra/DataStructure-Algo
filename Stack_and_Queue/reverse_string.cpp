#include<iostream>
#include<stack>

using namespace std;

int main()
{
    string str = "Hello";
    stack<char> s;

    for(int i=0; i< str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

// printing the reverse form of the given string
    while(!s.empty())
    {
        char ch = s.top();
        cout<<ch;
        s.pop();
    }

    return 0;
}