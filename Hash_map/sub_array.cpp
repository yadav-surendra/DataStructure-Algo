

// Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        
        unordered_map<int,int> mp;
        
        // inserting he elements of array a
        for(int i=0; i<a.size(); i++)
        {
            mp[a[i]] = i;
        }
        
        for(int i=0; i<b.size(); i++)
        {
            if(mp.find(b[i]) == mp.end())
            {
                return false;
            }
        }
        
        return true;
        
        
    }