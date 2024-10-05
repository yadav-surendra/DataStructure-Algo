#include<iostream>
using namespace std;

void fibo(int a, int b, int n){
    // base case.
    if(n==0)
    {
        return;
    }

    int sum = a + b;
    cout<< sum <<" ";
    a = b;
    b = sum;
    fibo(a,b,n-1);
}

int main(){
    int a=0, b=1, n=10;
    // n is the number of terms.
    cout<<a<<" "<<b<<" ";
    fibo(a,b,n-2);

    return 0;
}