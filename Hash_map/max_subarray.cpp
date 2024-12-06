//Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        int sum = 0;
        long long ans = 0;
         unordered_map<int,int> mp;
         mp[0] = 1;
         
         for(int i=0; i<n; i++)
         {
             if(arr[i] == 0)
             {
                 sum -= 1;
             }
             else
             {
                 sum += 1;
             }
             
             if(mp.find(sum) != mp.end())
             {
                 ans += mp[sum];
                 mp[sum]++;
             }
             else
             {
                 mp[sum] = 1;
             }
         }
         return ans;
    }