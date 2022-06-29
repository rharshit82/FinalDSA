int missingNumber(vector<int>& nums) {
        int Xor=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            Xor=i^nums[i]^Xor;
        }
        Xor=Xor^n;
        return Xor;
    }