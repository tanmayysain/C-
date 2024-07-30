#include<bits/stdc++.h>
using namespace std;

void push_element(map<int,int>&mp, vector<int>&ans,int x){
    int num=0;
    int cnt=0;

    for(auto it:mp){
        cnt += it.second;

        if(cnt>=x){
            num = it.first;
            break;
        }
    }
    ans.push_back(num);
}
 
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0 ;i < n;i++){
        cin>>arr[i];
    }

    map<int,int>mp;
    vector<int>ans;
    int i=0,j=0;
    int cnt=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            mp[arr[i]]++;
        }
    }

    push_element(mp,ans,x);

    for(int i=k;i<n;i++){
        if(arr[i]<0){
            mp[arr[i]]++;
        }
        if(arr[i-k]<0){
            mp[arr[i-k]]--;
        }

        push_element(mp,ans,x);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
return 0;
 
}