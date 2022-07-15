int solve(string s, int i,vectorint &dp){
        int n=s.size();
        if(i=n) return 1;
        if(dp[i]!=-1) return dp[i];
        int res=0;
        int no = s[i]-'0';
        int no2=0;
        if(i+1n){
             no2= no10 + (s[i+1]-'0');
        }
        if(no0) res+=solve(s,i+1,dp);
        if(no0 and no20 and no2=26) res+=solve(s,i+2,dp);
        return dp[i]=res;
    }
    int numDecodings(string s) {
        int n=s.size();
        vectorint dp(n+1,-1);
        return solve(s,0,dp);
    }