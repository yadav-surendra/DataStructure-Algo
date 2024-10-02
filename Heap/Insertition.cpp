#include <iostream>
#include <algorithm> // Include this for std::swap
using namespace std;

class heap
{
    int arr[100];
    int size;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]); // Use std::swap here
                index = parent;
            }
            // this segment is important because it prevents the machine from going in infinite loop.
            else
            {
                return;
            }
        }
    }

    // To delete from heap.
    // There are 3 steps  ivolved:
    // 1. Put the element to be deleted with the first element.
    // 2. Delete the last node.
    // 3. take the first element to it's right place.

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "There is nothing to delete." << endl;
            return;
        }
        // putting last node at the firdt node and deleting the last node.
        arr[1] = arr[size];
        size--;

        int i = 1;

        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;

            if ( (left < size) && (arr[i] < arr[left]))
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if ((left < size) && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(20);
    h.insert(30);
    h.insert(15);
    h.insert(45);
    h.insert(100);


    h.print();
    cout<<" the output after deleting the first node."<< endl;

    h.deleteFromHeap();
    h.print();
    return 0;
}

/*
Note:
The time complexity of insertition is O(logn).
*/