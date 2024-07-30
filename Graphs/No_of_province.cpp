#include<bits/stdc++.h>
using namespace std;
#define pb push_back

void dfs(int node, vector<vector<int>> &adj,vector<int> &vis){
    int n = adj[0].size();
    vis[node]=1;

    for(int i=0;i<n;i++){
        if(adj[node][i]==1 && vis[i]==0){
            dfs(i,adj,vis);
        }
    }
}
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }

    vector<int>vis(n,0);
    int cnt=0;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adj,vis);
        }
    }
 
    cout<<cnt<<endl;

}