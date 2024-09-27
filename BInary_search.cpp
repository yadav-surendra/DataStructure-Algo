/*
binary search is applicable only on sorted arrays.
*/

#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr , int target){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    int mid ;
    while(st<=end){
        //mid = (st+end)/2;
        // inorder to optimize our code for long integer valur in the worst case, we will be using this formula.
        mid = st + (end - st) / 2;
        if(arr[mid]<target)
        st = mid + 1;
        else if(arr[mid]>target)
        end = mid - 1;
        else
        return mid;
    }
    return -1;
}

int main()
{
    vector<int> vec = {1,3,6,8,12,15};
    
   int ans = BinarySearch(vec,12);
   cout<< ans;
    

    
}