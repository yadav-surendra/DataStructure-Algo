// The problem is to print numbers from 5 to 1

#include <iostream>
using namespace std;

// void printNumFrom5to1(int n)
// {
//     if(n>0)
//     {
//         cout<<n<<" ";
//         n--;
//         printNumFrom5to1(n);
//     }
// }
// to print numbers from one to five.
void printNumFrom1to5(int m, int n)
{
    // Base case
    if(m>n)
    {
        return;
    }
    
    cout<<m<<" ";
    printNumFrom1to5(m+1,n);

}

int main()
{
    printNumFrom1to5(0,5);
    return 0;
}
