#include<iostream>
#include<string>
using namespace std;

void find_occurrence(string str, int idx, char el){
    static int start = -1;
    static int last = -1;
// Base Case
    if(idx == str.length())
    {
        cout<<"The first occurrence of "<<el << " is "<< start<<endl;
        if(last != -1)
        {
            cout<<"The last occurrence of "<<el << " is  "<<last<<endl;
        }
        if(last == -1)
        {
            cout<<"The last occurrence of "<<el << " is also "<<start<<endl;
        }
        
        return;
    }
// Recursive step
    char curr_element = str[idx];
    if(curr_element == el){
        if(start == -1)
        {
            start = idx;
        }
        else{
            last = idx;
        }
    }
    find_occurrence(str, idx+1, el);

}

int main()
{
    string s = "surendra";
    find_occurrence(s,0,'r');

    return 0;
}

// Since we have treversed only once through out the process in our code, so it's time complexity will be O(n).