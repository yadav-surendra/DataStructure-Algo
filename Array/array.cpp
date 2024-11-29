#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    /*int size =5;

    int arr[size]= {3,6,1,44,8};
    int smallest , position;
    // to find the smallest number in array
    smallest = arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            position = i;
        }
    }
    cout<< "the smallest number in the given array is: "<< smallest<<" at position "<<position+1<< endl;
*/
    // linear search

 /*
 int array[]= {4,2,7,8,1,2,5};
    int found= 0;
    int search = 1;
    int array_size = sizeof(array) / sizeof(array[0]);
    for(int i=0; i<array_size; i++){
        if(array[i]==search)
        {
            found = 1;
            cout<<"element found "<<search<<endl;
        }
    }
    if(!found){
        cout<<"element not found in thhe array."<<endl;
    }

 */   

// reversing an aray
    int arr[]={2,6,3,8,9,4};
    int start =0 , end =5;
    while(start<=end){
        swap(arr,start,end);
        start++;
        end--;
    }
 cout<<"Reversed array is:"<<endl;
 for(int i=0; i<=5; i++){
    cout<<arr[i]<<" ";
 }
    return 0;
}