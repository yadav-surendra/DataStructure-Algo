#include<iostream>
using namespace std;

int sum(int n){
    // Base case
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else{
        return( n + sum(n-1));
    }

}

int main()
{
    int n=5;
    cout<< sum(3);
    
    return 0;
}