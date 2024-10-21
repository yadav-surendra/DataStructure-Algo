#include<iostream>
#include<string.h>
using namespace std;

void printPerm(string str, string perm)
{
    if(str.length() == 0)
    {
        cout<<perm<< endl;
        return;
    }
    for(int i=0; i<str.length(); i++)
    {
        char curr_char = str[i];
        string newstr = str.substr(0,i) + str.substr(i+1);
        printPerm(newstr, perm + curr_char);
    }
    
}

int main(){
    
    string str = "ABC";
    printPerm(str,"");

    return 0;
}

// It's time complexity is 0(n*n!).