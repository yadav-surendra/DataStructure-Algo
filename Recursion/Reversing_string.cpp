#include<iostream>
#include<string>
using namespace std;

void reverse(string str, int i)
{
    // Base case
    if(i==0)
    {
        cout<<str[i];
        return;
    }
    // Recursive steps
    cout << str[i];
    reverse(str,i-1);
}

int main()
{
    string s = "anirudh";
    int len = s.length();
    // cout<<len;
    reverse(s,len-1);
    return 0;
}

// The time complexity of this code is O(n).