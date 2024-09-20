#include <iostream>
#include <vector>

using namespace std;

// to find the pair sum of sorted array using optimal solution.
vector<int> pairsum(vector<int> vec, int target)
{
    vector<int> ans;
    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        int ps = vec.at(i) + vec.at(j);
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main()
{

    vector<int> array = {1, 2, 3, 4, 5, 6, 7};
    vector<int> answer = pairsum(array, 9);
    cout << answer[0] << " " << answer[1];

    return 0;
}