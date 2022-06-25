// Since we are decrementing 1 at a Time.
// We want MaxF to be maximized so even if it gets decremented, will leave it as it is
// Length - MaxF<=K Here maxF should be Maximum
// Using hashmax Function -> O (26n)
// Using Optimized Approach -> O(n)



class Solution {
public:
    int hashmax(map<char,int>&mp){
        int res=0;
        for(auto k: mp){
            res= max(res, k.second);
        }
        return res;
    }
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int res=0;
        int l =0;
        int mxf=0;
        for(int r=0; r<s.size();r++){
            mp[s[r]]++;
            mxf= max(mxf, mp[s[r]]);
            while((r-l+1 - mxf)>k){
                mp[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};