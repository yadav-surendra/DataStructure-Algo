#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {2, 1, 4, -3, 7, -9, 10, 8,0,19};
    int size = array.size();

    for(int i=1; i<size; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(array[i]<array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int i: array)
    {
        cout<< i << " ";
    }
    return 0;
}
