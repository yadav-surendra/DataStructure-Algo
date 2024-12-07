vector<int> countDistinct(vector<int> &arr, int k)
{
    // code here.
    vector<int> ans;
    unordered_map<int, int> mp;

    // Initialize the map with the first window
    for (int i = 0; i < k; i++)
    {
        mp[arr[i]]++;
    }
    // Push the count of distinct elements in the first window
    ans.push_back(mp.size());

    // Slide the window
    for (int i = k; i < arr.size(); i++)
    {
        // Remove the element that is sliding out of the window
        mp[arr[i - k]]--;
        if (mp[arr[i - k]] == 0)
        {
            mp.erase(arr[i - k]);
        }

        // Add the new element entering the window
        mp[arr[i]]++;

        // Push the count of distinct elements
        ans.push_back(mp.size());
    }

    return ans;
}