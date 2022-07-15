You are given an integer n. On each step, you may subtract one of the digits from the number.

How many steps are required to make the number equal to 0?

void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n;
    
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=0; i<=n; i++){
        s=to_string(i);
        for(int j=0; j<s.size(); j++){
            dp[i]=min(dp[i],dp[i-(s[j]-'0')]+1);
        }
    }
    cout<<dp[n];
    
}