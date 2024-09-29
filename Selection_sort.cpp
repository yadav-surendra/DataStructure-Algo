#include <iostream>
#include <vector>
#include <algorithm>  // For std::min
using namespace std;

int main() {
    vector<int> vec = {1, 2, 1, 5, 8, 10, 14};
    int size = vec.size();
    int i = 0;

    while (i < size) {
        int minimum = INT16_MAX;  // Reset minimum for each starting position i
        for (int j = i; j < size; j++) {
            minimum = min(minimum, vec[j]);  // Find the minimum in the range [i, size)
        }
        vec[i] = minimum;  // Replace element at i with the minimum value
        i++;
    }

    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
