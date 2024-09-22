
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> vec={1,-2,-3,-4,5,6,7};
    vector<int> v;
    list<int> l;
    int size=vec.size();
    int i=0,j=0,k=3;

    while(j<size){
        if(vec[j]<0)
        {
            l.push_back(vec[j]);
        }

        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k)
        {
            v.push_back(l.front());
            if(l.front()==vec[i])
            {
                l.pop_front();
            }
            i++;
            j++;
        }
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    return 0;
}


/*
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> vec = {1, -2, -3, -4, 5, 6, 7};
    vector<int> v;
    list<int> l;
    int size = vec.size();
    int i = 0, j = 0, k = 3;

    while(j < size){
        if(vec[j] < 0) {
            l.push_back(vec[j]);
        }

        // If window size is less than k, just expand the window
        if(j - i + 1 < k) {
            j++;
        }
        // Once window size becomes equal to k
        else if(j - i + 1 == k) {
            // If there's a negative number in the list, take the first one
            if(!l.empty()) {
                v.push_back(l.front());
            }
            // If no negative numbers, push 0
            else {
                v.push_back(0);
            }

            // Slide the window
            if(vec[i] < 0 && !l.empty() && vec[i] == l.front()) {
                l.pop_front();
            }
            i++;
            j++;
        }
    }

    // Output the result
    for(int val: v) {
        cout << val << " ";
    }
    return 0;
}

*/
