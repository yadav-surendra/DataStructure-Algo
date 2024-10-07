#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr , int i)
{
    if(i == arr.size()-1){
        return true;
    }
    if(arr[i] < arr[i+1])
    {
        //array is sorted till now.
        return isSorted(arr, i+1);
    }
    else{
        return false;
    }
}
int main(){
    vector<int> arr = {4,3,7};
    if(isSorted(arr,0))
    {
        cout<<"The array is strictly increasing."<<endl;
    }
    else{
        cout<<"The array is not strictly increasing."<<endl;
    }
    
    return 0;
}