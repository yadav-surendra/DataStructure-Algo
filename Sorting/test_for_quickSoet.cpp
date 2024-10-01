#include <iostream>
using namespace std;

// Function to partition the array on the basis of pivot element
int partition(int arr[], int low, int high)
{
    int i = low - 1;       // Index of smaller element
    int pivot = arr[high]; // Pivot element

    for (int j = low; j < high; j++) // Iterate over the range [low, high-1]
    {
        if (arr[j] < pivot) // If current element is smaller than pivot
        {
            i++; // Increment index of smaller element
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Place the pivot element at the correct position
    i++;
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;

    return i; // Return the partition index
}

// Function to perform quicksort on the array
void quickSort(int arr[], int low, int high)
{
    if (low < high) // Correct condition to check
    {
        // Partition the array and get the pivot index
        int pivot = partition(arr, low, high);

        // Recursively sort elements before and after the partition
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {4, 3, 5, 8, 7, 9, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;

    // Perform quicksort on the array
    quickSort(arr, low, high);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
