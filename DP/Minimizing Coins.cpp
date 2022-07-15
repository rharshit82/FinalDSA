Consider a money system consisting of n coins. Each coin has a positive integer value. 
Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.

For example, if the coins are {1,5,7} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
int cW(vector<int>&dp, int x, vector<int> &arr){
    if(x==0) {
        return 0;
    }
    if(dp[x]!=-1) return dp[x];
    int ways=INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(x-arr[i]>=0){
            int no=cW(dp,x-arr[i],arr);
            if(no!=-1)
                ways=min(ways,no+1);
        }
    }
    if(ways==INT_MAX) return dp[x]=-1;
    return dp[x]=ways;
}
void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n>>x;
    vector<int> arr(n);
    f(i,n) cin>>arr[i];
    // vector<int> arr2(m);
    // f(i,m) cin>>arr2[i];
    // vector<string> arr(n);
    // f(i,n) cin>>arr[i];
    // vector<int> arr2;
    vector<int> dp(x+1,0);
    for(int i=1; i<=x; i++){
        dp[i]=INT_MAX;
        for(int k=0; k<n;k++){
            if(i-arr[k]>=0){
                dp[i]=min(dp[i],dp[i-arr[k]]+1);
            }
        }
    }
    cout<<(dp[x]>=INT_MAX?-1:dp[x])<<endl;
 
    
}




int cW(vector<int>&dp, int x, vector<int> &arr){
    if(x==0) {
        return 0;
    }
    if(dp[x]!=-1) return dp[x];
    int ways=INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(x-arr[i]>=0){
            int no=cW(dp,x-arr[i],arr);
            if(no!=-1)
                ways=min(ways,no+1);
        }
    }
    if(ways==INT_MAX) return dp[x]=-1;
    return dp[x]=ways;
}
void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n>>x;
    vector<int> arr(n);
    f(i,n) cin>>arr[i];
    // vector<int> arr2(m);
    // f(i,m) cin>>arr2[i];
    // vector<string> arr(n);
    // f(i,n) cin>>arr[i];
    // vector<int> arr2;
    vector<int> dp(x+1,-1);
    cout<<cW(dp,x,arr);
    
}