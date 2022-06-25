// Come 1v1 TDM in BGMI

/*
    Programmer : Harshit Raj
    Nick Name  : rharshit82
    Occupation : BGMI Player
    Experience : Noob
*/


// ╱╱╭╮╱╱╱╱╱╱╱╱╱╭╮╱╱╭╮╭━━━┳━━━╮
// ╱╱┃┃╱╱╱╱╱╱╱╱╱┃┃╱╭╯╰┫╭━╮┃╭━╮┃
// ╭━┫╰━┳━━┳━┳━━┫╰━╋╮╭┫╰━╯┣╯╭╯┃
// ┃╭┫╭╮┃╭╮┃╭┫━━┫╭╮┣┫┃┃╭━╮┣━╯╭╯
// ┃┃┃┃┃┃╭╮┃┃┣━━┃┃┃┃┃╰┫╰━╯┃┃╰━╮
// ╰╯╰╯╰┻╯╰┻╯╰━━┻╯╰┻┻━┻━━━┻━━━╯
#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
#define int                  long long
#define ll                   long long
#define ld                   long double
#define pb                   push_back
#define GAWDSPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sz(a)                ((ll)a.size())
#define ceil(a)              ((ll)ceil(a))
#define min(a,b)             ((ll)min((ll)(a),(ll)(b)))
#define max(a,b)             ((ll)max((ll)(a),(ll)(b)))
#define ff                   first
#define ss                   second
#define sp(x)                setprecision(x)
#define pow2(x)              ((ll)1<<(x))
#define countsetbit(n)       __builtin_popcount(n)
#define fix(X) fixed << setprecision(X)
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,a,n) for(int i=a;i<n;i++)
#define fb(i,n,a) for(int i=n;i>=a;i--)
#define mem(a, x)       memset(a, x, sizeof(a))
#define mx_ele(a)         *max_element(all(a))
#define mn_ele(a)         *min_element(all(a))
#define all(a)             (a).begin(), (a).end()

/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
 
template<typename T1, typename T2>
istream& operator>>(istream &is, pair<T1,T2> &p){return (is >> p.first >> p.second);} 
 
template<typename T>
istream& operator>>(istream & is, vector<T> & v){ for(auto &I : v) is >> I ; return is;}
 
template<typename T1, typename T2>
ostream& operator<<(ostream& os, pair<T1, T2>& p){return (os << p.first << ' ' << p.second);}
 
template<typename T>
ostream& operator<<(ostream &os, vector<T>& v){for(auto I : v) os << I << ' ' ; return os;}

/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/

int lcm(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}
int countSetBits(int n)
{   
    if (n == 0)
        return 0;
 
    else  
        return (n & 1) + countSetBits(n >> 1);
}
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
bool sortbysec(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.ss == b.ss)
        return a.ff < b.ff;
    return a.ss < b.ss;
}
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
const ll MOD = 1e9+7;

const int N = 200 * 1000 + 11;




// Rough Work
//text.find(toReplace) != std::string::npos
//
//
//
//
//
void harshit(){
    int n = 0, m = 0, i, j;
    int k = 0, l = 0, mini=INT_MAX;
    int x=0, y=0, z=0,maxi=0 ;
    int ans=0, sum=0, count=0, diff;
    // vector<int> res;
    bool flag=false;
    string s,t,u,v;

    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    f(i,m){
        cin>>x>>y>>z;
        adj[y].pb({x,z});
        adj[x].pb({y,z});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, 1});
    vector<int> parent(n+1,-1);
    vector<int> dist(n+1,LLONG_MAX);
    dist[1]=0;
    while(!pq.empty()){
        auto node = pq.top().second;
        pq.pop();
        for(auto k: adj[node]){
            int d = k.second;
            int gnode = k.first;
            if(dist[node]+ d <dist[gnode]){
                dist[gnode]=dist[node]+d;
                parent[gnode]=node;
                pq.push({dist[gnode],gnode});
            }
        }
    }
    if(dist[n]==LLONG_MAX){
        cout<<-1;
        return;
    }
    debug(dist);
    vector<int> res;
    for(int i=n; i!=1; i=parent[i]){
        res.pb(i);
    }
    res.pb(1);
    reverse(all(res));
    cout<<res;
    // vector<int> arr(n);
    // f(i,n) cin>>arr[i];
    // vector<int> arr2(m);
    // f(i,m) cin>>arr2[i];
    // vector<string> arr(n);
    // f(i,n) cin>>arr[i];
    
    
}
signed main()
{
    GAWDSPEED
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        // cout << "Case #" << t << ": ";
        harshit();
    }
    return 0;
}