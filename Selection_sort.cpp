#include <iostream>
#include <vector>
#include <algorithm>  // For std::min
using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 5, 8, 10, 14};
    int size = arr.size();
    int i = 0;

    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
