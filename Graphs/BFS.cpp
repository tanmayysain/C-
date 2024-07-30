#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int>bfs(int n, vector<int>adj[]){
    int vis[n]={0};
    vis[1]=1;
    queue<int>q;
    q.push(1);

    vector<int>bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.pb(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int>ans = bfs(n,adj);

    for(auto it: ans){
        cout<<it<<" ";
    }
 
return 0;
 
}