   int LCS(int i, int j,string &s1, string&s2, vectorvectorint&dp){
        if(i0 or j0){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]=1+ LCS(i-1,j-1,s1,s2,dp);
        }
        return dp[i][j]=max(LCS(i-1,j,s1,s2,dp), LCS(i,j-1,s1,s2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vectorvectorint dp(text1.size(), vectorint(text2.size(),-1));
        return LCS(text1.size()-1, text2.size()-1,text1,text2,dp);
    }