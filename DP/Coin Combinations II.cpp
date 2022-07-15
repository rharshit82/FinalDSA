Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 3 ways:
2+2+5
3+3+3
2+2+2+3

void harshit(){
    int MOD = 1e9+7;
    int n ;
    int x;
    cin>>n>>x;
    vector<int> arr(n);
    f(i,n) cin>>arr[i];
 
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    dp[0][0]=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            dp[i][j]=dp[i-1][j];
            int left = j-arr[i-1];
            if(left>=0) 
                (dp[i][j]+=dp[i][left])%=MOD ;
        }
    }
    cout<<dp[n][x]<<endl;
}