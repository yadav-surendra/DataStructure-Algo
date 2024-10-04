// The problem is to print numbers from 5 to 1

#include <iostream>
using namespace std;

void printNum(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        n--;
        printNum(n);
    }
}

int main()
{
    printNum(5);
    return 0;
}
