// Problem statement: To find the subarray of size k having the maximum sum.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 6, 3, 8, 9, 2};
    int k = 3;  // Size of the window
    int i = 0, j = 0;
    int maximum = INT16_MIN;
    int sum = 0;
//  cout<<vec.size();
    while(j < vec.size()) {
        sum += vec[j];  // Add the current element to the sum

        // If window size is smaller than k
        if(j - i + 1 < k) {
            j++;
        }
        // When window size is exactly k
        else if(j - i + 1 == k) {
            maximum = max(maximum, sum);  // Update maximum with current sum
            sum -= vec[i];  // Remove the element going out of the window
            i++;  // Slide the window
            j++;
        }
    }

    cout << "The maximum sum of size " << k << " window is: " << maximum;
    return 0;
}
