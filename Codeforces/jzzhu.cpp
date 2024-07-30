#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    queue<int>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        q.push(i);
    }
    int ans;
    while(!q.empty()){
       int z = q.front();
        ans = z+1;
        if(mp[z]+m>=arr[z])
        q.pop();
        else{
            q.pop();
            mp[z]+=m;
            q.push(z);
        }
    }
    cout<<ans<<endl;
return 0;
}       