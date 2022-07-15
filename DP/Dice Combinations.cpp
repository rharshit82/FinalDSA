Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3

int countres(vector<int>&dp, int n){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int a = countres(dp,n-1);
    int b = countres(dp,n-2);
    int c = countres(dp,n-3);
    int d = countres(dp,n-4);
    int e = countres(dp,n-5);
    int f = countres(dp,n-6);
    return dp[n]=(a+b+c+d+e+f)%MOD;
}
void harshit(){
    int n = 0, m = 0, i, j, k = 0, l = 0, mini=INT_MAX;
    int x, y, maxi=0, ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;
 
    cin>>n;
    vector<int>dp(n+1,-1);
    // vector<int> arr(n);
    // f(i,n) cin>>arr[i];
    // vector<int> arr2(m);
    // f(i,m) cin>>arr2[i];
    // vector<string> arr(n);
    // f(i,n) cin>>arr[i];
    cout<<countres(dp,n);
    
}