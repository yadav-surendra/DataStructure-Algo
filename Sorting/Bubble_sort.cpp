#include<iostream>
#include<vector>
using namespace std;

// bubble sort got its name as "Bubble" becoz the largest element gets to the right side like a bubble on top of water.
int main()
{
    vector<int> vec={3,5,1,2,8,9,12,11};
    int size = vec.size();
    int count = 1;

    while(count<size)
    {
        for(int i=0; i<size-count; i++)
        {
            if(vec[i]>vec[i+1])
            {
                int temp = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = temp;
            }
        }
        count++;
    }
//  printing the sorted array.
    for(int i : vec){
        cout<<i<<" ";
    }
    return 0;
}