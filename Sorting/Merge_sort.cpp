#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> arr, int l, int mid, int r)
{
    int n1= mid-l+1;
    int n2= r-mid;

    int arr_a[n1];
    int arr_b[n2];


}


void mergeSort(vector<int> arr, int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main(){
    vector<int> arr = {2,1,5,7,3,9,4};

    return 0;
}