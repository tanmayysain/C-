#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>ans;
     for(int i=0;i<n;i++){
        cin>> arr[i];
     }

     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
        mp[arr[i]]++;
     }
     
     for(auto i: mp){
        ans.push_back(i.first);
     }

     cout<<ans.size();
 
return 0;
 
}