#include<bits/stdc++.h>
using namespace std;

void print(int index,int n, vector<int>&v,int arr[]){
    if(index==n){
        for (auto i: v) {
            cout<<i<<" ";
    }
      cout<<endl;
    return ;
    }
    v.push_back(arr[index]);
    print(index+1,n,v,arr);
    v.pop_back();
    print(index+1,n,v,arr);
}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>v;

    print(0,n,v,arr);
 
return 0;
 
}