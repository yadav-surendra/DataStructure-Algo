#include<iostream>
using namespace std;

int main(){
    int n=7;
    //cin >>n;
// for upper part.
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (int j =1; j<=2*n-1-2*i; j++)
            {
                cout << " ";
            }
             for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout<<endl;
        }
        if(i==n){
            for(int i=1; i<=2*n-1; i++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    // for lower part

    for(int i=n; i>=1; i--)
    {
        if(i==n){
            for(int j=1;j<=2*n-1;j++)
            {
                cout<<"*";
            }
        
        }
        if(i!=n)
        {
             for(int j=i; j>=1; j--)
             {
                cout<<"*";
             }
             for(int j=1; j<=2*n-1-2*i;j++)
             {
                cout<<" ";
             }
             for(int j=i; j>=1; j--){
                cout<<"*";
             }
        }
   cout<<endl;
    }
    return 0;
}
