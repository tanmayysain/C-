#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //n = no. of nodes  m = no. of edges
    int n,m;
    cin>>n>>m;
    //declaration of adjacency List
    vector<int>adj[n+1];

    for(int i=0;i<m;i++){
        //Entering value for the nodes
        int u,v;
        cin>>u>>v;
        //Connecting Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
 
return 0;
 
}