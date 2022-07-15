Consider an n×n grid whose squares may have traps. It is not allowed to move to a square with a trap.

Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.

void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n;
    vector<vector<char>> arr(n,vector<char>(n));
    f(i,n){
        f(j,n){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    dp[0][0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[i-1][j-1]=='*') dp[i][j]=0;
            else if(i*j==1) dp[i][j]=1;
            else (dp[i][j]=dp[i-1][j]+ dp[i][j-1])%=MOD;
        }
    }
    cout<<dp[n][n];
}