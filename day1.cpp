#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:\n";
    cin>>n;
   /*for(int i =1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }

int p=1;
   for(int i =1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<p<<" ";
    }
    cout<<endl;
   }
   

for(int i =1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<i<<" ";
    }
    cout<<endl;
   }
 */

for(int i =1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(j<i)
        cout<<"  ";
        else
        cout<<i<<" ";
    }
    cout<<endl;
   }
    return 0;
}