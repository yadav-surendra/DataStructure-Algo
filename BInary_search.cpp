/*
binary search is applicable only on sorted arrays.
The time complexity of the binary search is O(logn).
It is highly optimized algorithm than linear search algorithm.
*/

#include <iostream>
#include <vector>
using namespace std;
/*
int BinarySearch(vector<int> arr , int target){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    int mid ;
    while(st<=end){
        //mid = (st+end)/2;
        // inorder to optimize our code for long integer valur in the worst case, we will be using this formula.
        mid = st + (end - st) / 2;
        if(arr[mid]<target)
        st = mid + 1;
        else if(arr[mid]>target)
        end = mid - 1;
        else
        return mid;
    }
    return -1;
}

*/

// Binary search with recursion.
int BinarySearch(vector<int> arr, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (target < arr[mid])
        {
            return BinarySearch(arr, target, st, mid - 1);
        }
        else if (target > arr[mid])
        {
            return BinarySearch(arr, target, mid + 1, end);
        }
        else
            return mid;
    }
    else
    {
        return -1; // no target found.
    }
}
int main()
{
    vector<int> vec = {1, 3, 6, 8, 12, 15, 20, 24, 26, 30, 31};

    int target = 15;
    int ans = BinarySearch(vec, target, 0, vec.size() - 1);
    cout << ans;

    return 0;
}