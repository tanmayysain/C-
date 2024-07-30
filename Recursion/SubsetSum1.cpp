#include<bits/stdc++.h>
using namespace std;

void Subset(int index, int n,int sum,int arr[],vector<int>&v){
   if(index==n){
    v.push_back(sum);
    return ;
   }

   Subset(index+1,n,sum+arr[index],arr,v);

   Subset(index+1,n,sum,arr,v);

}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    Subset(0,n,0,arr,v);
    for(auto i:v){
        cout<<i<<" ";
    }

return 0;
 
}