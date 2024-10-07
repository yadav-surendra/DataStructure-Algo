#include<iostream>
using namespace std;

void move_X(string str, int idx, int count, string new_str)
{
    if(idx == str.length())
    {
        for(int n=0; n<count; n++)
        {
            new_str += "x";
        }
        cout<<new_str<<endl;
        return;
    }

    char curr_str = str[idx];
    if(curr_str == 'x')
    {
        count++;
        move_X(str, idx+1, count, new_str);
    }
    else{
        new_str += curr_str;
        move_X(str, idx+1, count, new_str);
    }
}
int main(){
    string str="abxcxdxx";
    move_X(str,0,0,"");
    
    return 0;
}