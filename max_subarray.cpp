#include<iostream>
using namespace std;

int main(){

/*  
//brute force appproach to find the max sum of the sub array.
    int arr[] = {1,-4,-8,-2,-5,6,12};
    int maxSum=0;

    for(int start=0; start<7; start++)
    {
        int curr_sum =0;
        for(int end= start; end<7; end++)
        {
            curr_sum += arr[end];
            maxSum = max(maxSum, curr_sum);
        }
    }
    cout<<"the max sum of the subarray is "<< maxSum;
*/
    
    // with kadane's algorithm, it will be much efficient with linear time complexity.
    int arr[] = {-1,4,-8,-2,5,-6,12};
    int maxSum=INT16_MIN;
    int curr_sum=0;

    for(int i=0; i<7; i++){
        curr_sum += arr[i];
        maxSum= max(maxSum, curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<"the max sum of the array is "<<maxSum;
    return 0;
}