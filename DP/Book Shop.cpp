You are in a book shop which sells n different books. You know the price and number of pages of each book.

You have decided that the total price of your purchases will be at most x. What is the maximum number of pages you can buy? You can buy each book at most once.

void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n>>x;
    vector<int> arr1(n);
    f(i,n) cin>>arr1[i];
    vector<int> arr2(n);
    f(i,n) cin>>arr2[i];
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            dp[i][j]=dp[i-1][j];
            if(j-arr1[i-1]>=0)
                dp[i][j]=max(dp[i][j],dp[i-1][j-arr1[i-1]]+arr2[i-1]);
        }
    }
    cout<<dp[n][x];
}