#include<iostream>
using namespace std;

int power(int x, int n){
    //Bases cases.
    // if the power of any number becomes 0 then itd value is by default 1.
    // and if the number itself is 0 then it will remain 0 for any value of n.
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