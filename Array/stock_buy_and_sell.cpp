#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {7, 20, 3, 5, 6, 2, 1, 19};
    int best_buy = vec[0];
    int max_profit = 0;

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > best_buy)
        {
            max_profit = max(max_profit, vec[i] - best_buy);
        }
        best_buy = min(best_buy, vec[i]);
    }

    cout << "the maximum profit is: " << max_profit << " when bought at " << best_buy << " and sold at " <<endl;
    return 0;
}
