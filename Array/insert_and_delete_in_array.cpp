#include <iostream>
using namespace std;

void insert(int arr[], int &size, int data, int pos) {
    if (pos < 0 || pos > size) {
        cout << "Invalid position. Valid positions are from 0 to " << size << "." << endl;
        return;
    }

    // Shift elements to the right to make space
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the given position
    arr[pos] = data;

    // Increment the size of the array
    size++;
}

void remove(int arr[], int &size, int pos)
{
    if (pos < 0 || pos >= size) {
        cout << "Invalid position. Valid positions are from 0 to " << size << "." << endl;
        return;
    }

    for(int i=pos; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    // decrement size
    size--;

}

int main() {
    int arr[100]; // Declare an array with a capacity of 100
    int size = 0; // Start with an empty array

    // Insert elements
    insert(arr, size, 7, 0);
    insert(arr, size, 5, 1);
    insert(arr, size, 9, 2);
    insert(arr, size, 4, 3);
    insert(arr, size, 10, 4);

    // Insert another element
    insert(arr, size, 8, 2);
    insert(arr, size, 18, 6);
   // insert(arr, size, 8, 10);

   remove(arr,size,2);
   remove(arr,size,0);
   remove(arr,size,4);


    // Display the array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

     // Display the size
    cout << "Size: " << size << endl;

    return 0;
}
