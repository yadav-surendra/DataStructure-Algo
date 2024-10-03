#include<iostream>
#include<queue>

using namespace std;
int main()
{
    // By default max-heap is formed.
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(9);
    pq.push(1);
    pq.push(10);

    cout<< pq.top()<<endl;  // prints the max element in the heap as in max-heap top element is the largest.
    pq.pop();
    cout<< pq.top()<<endl;
    cout<<pq.size()<<endl;

    if(pq.empty())
    {
        cout<<"The queue is empty."<<endl;
    }
    else{
        cout<<"THe queue s not empty."<<endl;
    }

// Now lets see how we can make min-heap using priority queue stl.

    cout<<"Implememting min-heap using queue."<<endl;
    
    priority_queue< int , vector<int> , greater<int> > min_heap;

    min_heap.push(5);
    min_heap.push(2);
    min_heap.push(9);
    min_heap.push(1);
    min_heap.push(10);

    cout<< min_heap.top()<<endl;  // prints the max element in the heap as in max-heap top element is the largest.
    min_heap.pop();
    cout<< min_heap.top()<<endl;
    cout<<min_heap.size()<<endl;

    if(min_heap.empty())
    {
        cout<<"The queue is empty."<<endl;
    }
    else{
        cout<<"THe queue s not empty."<<endl;
    }

    return 0;

}