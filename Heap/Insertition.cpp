#include<iostream>
using namespace std;

class heap{
    int arr[100];
    int size;
public:
    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int n)
    {
        size++;
        int index = size;
        int parent = index/2;
    while(index>1)
    {
        if(arr[index] > arr[parent])
        {
            swap(arr[index],arr[parent]);
        }
       
    }         
    }

    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<< arr[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(20);
    h.insert(30);
    h.insert(15);
    h.insert(45);

    h.print();
    return 0;
}