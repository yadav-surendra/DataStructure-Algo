#include <iostream>
#include <vector>
 using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 10, 15, 20, 25, 30};
    int target = 20;

    int result = linearSearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result <<endl;
    } else {
        cout << "Element not found in the array" <<endl;
    }

    return 0;
}