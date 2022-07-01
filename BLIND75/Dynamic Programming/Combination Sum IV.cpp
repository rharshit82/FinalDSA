class Solution {
public:
    
     // check for every element of nums. An element can only be taken 
    // if it is less than target.
	// If an element is chosen, recurse for remaining value.
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<unsigned long>dp(target+1,0);
        dp[0]=1;
        for(int i=1; i<=target; i++){
            for(auto k: nums){
                if(i-k>=0){
                    dp[i]+=dp[i-k];
                }
            }
        }
        return dp[target];
    }
};