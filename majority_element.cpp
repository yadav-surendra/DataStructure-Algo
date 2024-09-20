#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;
// this is brute force algorithm.
/*int majority(vector<int> nums) {
    int n = nums.size();
    for(int val: nums) {  // Corrected loop
        int freq = 0;
        for(int el: nums) {  // Corrected loop
            if(val == el) {
                freq++;
            }
        }
        if(freq > n / 2) {
            return val;  // Return the majority element
        }
    }
    return -1;  // Return -1 if no majority is found
}
*/

/*      // optimized solution
int majority(vector<int> nums){
    sort(nums.begin(),nums.end());

    int n= nums.size();
    int ans=nums[0],freq=0;

    for(int i=1; i<n; i++){
        if(nums[i]==nums[i-1])
        {
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {1, 2, 2, 3, 2};
    int result = majority(vec);
    cout<<"result is:"<<result;
    return 0;
}

*/

int moore(vector<int> nums){
    int n= nums.size();
    int freq=0, ans;

    for(int i=0; i<n; i++){
        if(freq==0){
         ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> vec={1,2,2,2,3};
    int result= moore(vec);
    cout<<result<<endl;
    return 0;
}

