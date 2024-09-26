#include <iostream>
#include <vector>
using namespace std;

/*
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
*/

// optomized code
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans(4,1);
   int n = vec.size();
   // prefix calculation
   for(int i=1; i<n; i++)
   {
    ans[i] = ans[i-1]*vec[i-1];
   }

    // for suffix
    int suffix =1;
    for(int i=n-2; i>=0; i--)
    {
     suffix *= vec[i+1]; 
     ans[i] = suffix;
    }

    for(int val : ans)
    {
        cout<< val <<" ";
    }
    return 0;
}