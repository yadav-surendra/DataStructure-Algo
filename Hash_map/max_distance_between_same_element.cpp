int maxDistance(vector<int> &arr) {
        // Code here
        int n=arr.size();
        unordered_map<int,int> mp;
        int ans = 0;
        
        // insert element if it is encountered for first time
        for(int i=0; i<n; i++)
        {
            if(mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = i;
            }
            else
            {
                ans = max(ans, i-mp[arr[i]]);
            }
        }
        
        return ans;
    }