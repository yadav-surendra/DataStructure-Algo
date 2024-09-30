#include<iostream>
#include<vector>

using namespace std;

// Merge two subarrays of arr[].
// First subarray is arr[l..mid]
// Second subarray is arr[mid+1..r]
void merge(vector<int>& arr, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Create temporary arrays
    vector<int> a(n1);
    vector<int> b(n2);

    // Copy data to temporary arrays a[] and b[]
    for(int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = l; // Initial index of merged subarray

    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of a[], if any
    while(i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of b[], if any
    while(j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

// l is for left index and r is right index of the subarray of arr to be sorted
void mergeSort(vector<int>& arr, int l, int r)
{
    if(l < r)
    {
        // Same as (l + r) / 2, but avoids overflow for large l and r
        int mid = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    vector<int> arr = {2, 1, 5, 7, 3, 9, 4};
    mergeSort(arr, 0, arr.size() - 1);

    // Print sorted array
    for(int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
