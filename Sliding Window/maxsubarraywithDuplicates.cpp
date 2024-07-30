#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
         mp[arr[i]]++;
        sum+=arr[i];
    }

    if(mp.size() == k){
        ans = max(ans,sum);
    }
    
    for(int i=k;i<n;i++){
        sum-=arr[i-k];

        if(--mp[arr[i-k]] == 0){
            mp.erase(arr[i-k]);
        }

        sum+=arr[i];
        mp[arr[i]]++;
        if(mp.size() == k){
            ans = max(sum,ans);
        }
    }

    cout<<ans<<endl;
 
return 0;
 
}