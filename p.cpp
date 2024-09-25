#include <iostream>
#include <vector>
using namespace std;

// Brute force approach.
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans;   //{ 24,12,8,6}
   int pro=1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            pro *= vec[j];
        }
        ans.push_back(pro);
        pro=1;
    }

    for (int a:ans)
    {
        cout << a << " ";
    }
    return 0;
}