// https://cses.fi/problemset/task/1666/
// Byteland has n cities, and m roads between them. The goal is to construct new roads so that there is a route between any two cities.

// Your task is to find out the minimum number of roads required, and also determine which roads should be built.
// Input:
// 4 2
// 1 2
// 3 4

// Output:
// 1
// 2 3
// UNION FIND TLE

void dfs(int node, vector<bool>&visited, vector<vector<int>> &g){
    if(visited[node]) return;
    visited[node]= true;
    int res=0;
    for(auto k: g[node]){
        if(!visited[k]){
            dfs(k,visited,g);
        }
    }
}
void harshit(){
    int n,m;
    cin>>n>>m;
    
    vector<bool> visited(n+1,false);
    vector<vector<int>> g(n+1);

    while(m--){
        int a,b; cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    vector<int> res;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            res.pb(i);
            dfs(i,visited,g);
        }
    }
    cout<<res.size()-1<<endl;
    f(i,res.size()-1){
        cout<<res[i]<<" "<<res[i+1]<<endl;
    }
    
    
}