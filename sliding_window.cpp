#include<iostream>
#include<vector>
using namespace std;

int max_sum(vector<int> nums, int size){
    int sum=0;
    int maximum=0;
    for(int i=0; i<5; i++){
        sum= nums[i]+nums[i+1]+nums[i+2];
        maximum= max(maximum,sum);

    }
    return maximum;
}

int main(){
    vector<int> vec={1,12,3,4,5,6,2};
    int result = max_sum(vec,3);
    cout<<"the maximum of 3 size subarray is: "<< result;

    return 0;
}
