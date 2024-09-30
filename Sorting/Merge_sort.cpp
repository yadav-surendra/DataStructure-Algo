#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> arr, int l, int mid, int r)
{
    int n1= mid-l+1;
    int n2= r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;    //traverses array a
    int j=0;    //traverses array b
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
            k++;
            i++;
    }
    while(j<n2)
    {
        arr[k]=a[j];
            k++;
            j++;
    }
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