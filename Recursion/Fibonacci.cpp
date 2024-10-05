#include<iostream>
using namespace std;

void fibo(int a, int b, int n){
    // base case.
    // Base case should be written at the begining of the function.
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
    // n is the number of terms that is to be printed in the series.
    cout<<a<<" "<<b<<" ";
    // Two terms of the series are alredy printed in the main function so (n-2) id passed to the function call.
    fibo(a,b,n-2);

    return 0;
}