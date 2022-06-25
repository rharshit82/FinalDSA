//j for Right poitner, i for Left Pointer
// j Normal going from left to right
// left pointer i Compressing for sum >=target
// Since we went 1 overboard, we get j-i+2


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int res = INT_MAX;
        int i=0;
        int sum=0;
        for(int j=0; j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                i++;
            }
            if(sum>=target) res= min(res, j-i+2);
        }
        return res==INT_MAX?0:res;
    }
};