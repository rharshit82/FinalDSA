Consider a money system consisting of n coins. Each coin has a positive integer value. 
Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 8 ways:
2+2+5
2+5+2
5+2+2
3+3+3
2+2+2+3
2+2+3+2
2+3+2+2
3+2+2+2
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
    vector<int> dp(x+1,0);
    dp[0]=1;
    for(int i=1; i<=x; i++){
        for(auto c: arr){
            if(i-c>=0){
                dp[i]=(dp[i]+dp[i-c])%MOD;
            }
        }
    }
    cout<<dp[x]%MOD<<endl;
    
}