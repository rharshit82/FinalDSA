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
#define endl                 '\n'
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
#define dbg debug

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
const ll MOD = 1e9+7;

int lcm(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}
ll power(ll x,ll y)
    {
        ll res=1;
        while(y>0)
        {
            if(y%2)
                res=res*x;
            x=x*x;
            y>>=1;
        }
        return res;
    }
/*-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------*/
//bool prime[(int)1e5];
//void SieveOfEratosthenes(int n)
//{
//    
//    memset(prime, true, sizeof(prime));
// 
//    for (int p = 2; p * p <= n; p++) {
//        if (prime[p] == true) {
//            for (int i = p * p; i <= n; i += p)
//                prime[i] = false;
//        }
//    }
//}
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


//const int N = 200 * 1000 + 11;


//vector<int> g[N];

// Rough Work
//text.find(toReplace) != std::string::npos
//
//
//
//
//

struct item{
    int m, c;
};
struct segtree{
    item NUETRAL_ELEMENT = {INT_MAX,0};
    int size;
    vector<item> values;
    void init(int n){
        size=1;
        while(size<n) size+=2;
        values.resize(4*size+2);
    }
    item single(int v){
        return {v,1};
    }
    item merge(item a, item b){
        if(a.m<b.m) return a;
        if(a.m>b.m) return b;
        return {a.m,a.c+b.c};
    }
    void set(int i, int v, int x, int lx, int rx){
        if(rx-lx==1){  //size of Tree 1
            values[x]=single(v);
            return;
        }
        int m = (lx+rx)/2;
        if(i<m){
            set(i,v,2*x+1,lx,m); //Left Subtree
        } else{
            set(i,v,2*x+2,m,rx); // Right Subtree
        }
        values[x] = merge(values[2*x+1],values[2*x+2]); //Sum of Left and Right SubTree
    }
    void set(int i, int v){
        set(i,v,0,0,size);
    }
    item calc(int l, int r, int x, int lx, int rx){
        if(lx>=r or l>=rx){
            return NUETRAL_ELEMENT; //No intersection
        }
        if(lx>=l and rx<=r) return values[x];
        int m = (lx+rx)/2;
        item s1 = calc(l,r,2*x+1,lx,m);
        item s2 = calc(l,r,2*x+2,m,rx);
        return merge(s1,s2);
    }
    item calc(int l, int r){
        return calc(l,r,0,0,size);
    }
};
void harshit(){
    int n,m;
    cin>>n>>m;
    
    segtree st;
    st.init(n);
    for(int i=0; i<n; i++){
        int v; cin>>v;
        st.set(i,v);
    }
    while(m--){
        int op;
         cin>>op;
         if(op==1){
            int i, v;
             cin>>i>>v;
             st.set(i,v);
         } else{
            int l,r; cin>>l>>r;
            item res = st.calc(l,r);
            cout<<res.m<<" "<<res.c<<endl;
         }
    }
    
    
}
signed main()
{
    GAWDSPEED
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        // cout << "Case #" << i << ": ";
        harshit();
    }
    return 0;
}