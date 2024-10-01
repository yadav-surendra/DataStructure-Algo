#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low-1;
    int pivot = arr[high];

    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            //swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    i++;
    int t = arr[i];
    arr[i] = arr[high];
    arr[high] = t;

    return i;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr,low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}
int main()
{
    int arr[] = {4, 3, -5, 8, 17, 9, 1, -2,10,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;

    quickSort(arr,low,high);

    for(int i=0; i<=high; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


