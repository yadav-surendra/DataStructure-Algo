#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    
    if(left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    

    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest); //to take the node further to its correct position if possible.
    }
}

int main()
{
    int arr[] = { -1,55,54,52,57,59};
    int n = 5;

    for(int i=n/2; i>0; i--)
    {
        heapify(arr,n,i);
    }

    cout<<"printing the array in heap form."<<endl;

    for(int i=1; i<=n; i++)
    {
        cout<<arr[i] << " ";
    }cout<<endl;

    return 0;
}
