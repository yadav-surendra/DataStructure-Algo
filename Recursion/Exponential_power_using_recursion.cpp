#include<iostream>
using namespace std;

int power(int x, int n){
    if(n==0)
    {
        return 1;
    }
    if(x==0)
    {
        return 0;
    }

    return (x * power(x,n-1));

}

int main()
{
    int n =3;
    int x = 5;

    cout << power(x,n);
    return 0;
}