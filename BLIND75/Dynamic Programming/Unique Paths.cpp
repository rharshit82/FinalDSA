 int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        dp[0][0]=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(j-1>=0 and i-1>=0)
                    dp[i][j] = dp[i][j-1]+ dp[i-1][j];
                else if(j-1>=0)
                    dp[i][j] = dp[i][j-1];
                else if(i-1>=0)
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }

 int count(int m, int n, vector<vector<int>> &dp,int i, int j){
        if(i>=m or j>=n) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=count(m,n,dp,i+1,j) + count(m,n,dp,i,j+1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        // dp[0][0]=1;
        // dp[0][1]=1;
        // dp[1][0]=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(j-1>=0 and i-1>=0)
                    dp[i][j]=dp[i][j-1] + dp[i-1][j];
                else
                    if(j-1>=0) dp[i][j]=dp[i][j-1];
                    else if(i-1>=0) dp[i][j]=dp[i-1][j];
                    else dp[i][j]=1;
            }
        }
        return dp[m-1][n-1];
    }