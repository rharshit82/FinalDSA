// Given the structure of a company, your task is to calculate for each employee the number of their subordinates.
// https://cses.fi/problemset/task/1674/
// Input:
// 5
// 1 1 2 3

// Output:
// 4 1 1 0 0

const int sz = 2e5;
int subTree[sz];
void dfs(int x, vector<vector<int>> &children){
    debug(x);
    subTree[x]=1;
    for(auto child: children[x]){
        dfs(child, children);
        subTree[x]+=subTree[child];
    }
}
void harshit(){
    int n;
    cin>>n;
    vector<vector<int>> children(n+1);
    for(int i=1; i<n; i++){
        int parent; cin>>parent;
        children[parent].pb(i+1);
    }
    dfs(1,children);
    for(int i=1; i<=n; i++){
        cout<<subTree[i]-1<<" ";
    }
    
}