#include<iostream>
using namespace std;
int factorial ( int n){
    // Base case upadated.
    if(n==0 || n == 1){
        return 1;
    }

    return (n * factorial(n-1));
}

int main(){
    int n=3;
    cout <<"Factorial of "<< n << " is "<< factorial(n);

    return 0;
}