#include<bits/stdc++.h>
using namespace std;

void subs(int index,int n,vector<int>&v,int arr[],int k,int sum){
    if(index==n){
        if(sum==k){
            for(auto i:v){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //take
    v.push_back(arr[index]);
    sum+=arr[index];
    subs(index+1,n,v,arr,k,sum);
    v.pop_back();
    sum-=arr[index];

    //not take
    subs(index+1,n,v,arr,k,sum);
}
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    int sum=0;
    subs(0,n,v,arr,k,sum);
 
return 0;
 
}