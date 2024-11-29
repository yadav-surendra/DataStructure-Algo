#include<iostream>
using namespace std;

int main(){
    int n = 5;
    long binary= n;
    int base = 2;
    int x = base;
    int ans = 1;

    while(binary>0)
    {
        if(binary%2 == 1)
        {
            ans = ans* x;
        }
        x = x*x;
        binary = binary / 2;
    }

    cout<<base<<" to the power "<<n<<" is:"<< ans<<endl;
    return 0;
}