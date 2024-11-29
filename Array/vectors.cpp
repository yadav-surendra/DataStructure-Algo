#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<"size of vec is: "<<vec.size()<<" and capacity is: "<<vec.capacity()<<endl;

// to delete element from last index.
    vec.pop_back();

// for each loop to print the elements of vector. here the datatyoe of iterator should be same as that of the      
// datatype of the vector.
    for(int value: vec)
    {
        cout<<value<<endl;
    }
//to access the first entered element
    cout<<vec.front()<<endl;
//to access the last entered element
    cout<<vec.back()<<endl;
// to access the element at any index
    cout<< vec.at(2)<<endl;

    return 0;
}