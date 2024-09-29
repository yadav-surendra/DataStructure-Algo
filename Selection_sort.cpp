#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = { 1,2 ,5, 8 ,1, 10, 14};
    int size = vec.size();
    int i=0 ;
    int minimum = INT16_MAX;
    while(i<size)
    {
        for(int j=i; j<size; j++){
            minimum = min(minimum, vec[j]);
        }

        vec[i] = minimum;
        i++;
    }

    for(int i: vec){
        cout<<i<< " ";
    }
    return 0;
}