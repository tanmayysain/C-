#include<bits/stdc++.h>
using namespace std;
#define pb push_back

void dfs(int node,vector<int> adj[], vector<bool>&vis,vector<int> &ls){
    vis[node]=true;
    ls.pb(node);

    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int>dfsOfGraph(int n,vector<int>adj[]){
    vector<bool> vis(n, false);
    vector<int>ls;

    for (int i = 1; i < n; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, ls);
        }
    }
    return ls;
}
 
int main(){
     int n;
    cin>>n;
    vector<int>adj[n+1];

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int>ans = dfsOfGraph(n,adj);

    for(auto it: ans){
        cout<<it<<" ";
    }
 
return 0;
 
}