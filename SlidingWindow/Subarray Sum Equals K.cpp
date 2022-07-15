int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int res=0;
        for(int i=0; i<n; i++){\
            sum+=nums[i];
            res+=mp[sum-k];
            mp[sum]++;
        }
        return res;
    }