
//
// LAST NODE IN BFS IS END OF DIAMETER
//
#define SZ 200005
int n, m, k, x;
vector<int> g[SZ];

vector<int> ans(SZ, -1);

int bfs(int src){
    queue<int> q;
    int top;
    vector<int> dis(n+1,-1);
    dis[src]=0;
    ans[src]=max(ans[src],dis[src]);
    q.push(src);
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(auto node: g[top]){
            if(dis[node]==-1){
                q.push(node);
                dis[node] = dis[top]+1;
                ans[node] = max(dis[node],ans[node]);
            }
        }
    }
    return top;
}
void harshit(){
    cin>>n;
    for(int i=0; i<n-1; i++){
        int a,b; cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    
    int lastnode = bfs(1);
    int otherlastnode = bfs(lastnode);
    bfs(otherlastnode);
    int res=0;
    for(int i=1; i<=n; i++){
        res= max(res,ans[i]);
    }
    cout<<res;
}
