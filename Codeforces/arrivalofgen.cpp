#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());

    vector<int> v1;

    for(int i=n-1;i>=0;i--){
       v1.push_back(v[i]);
    }
    
    
//for(int i=0;i<n;i++){
  //      cout<< arr[i]<< " ";
  //  }
   int a = v1[0];
   int b = v1[n-1];

   int p=0, q=0;

   for(int i=0;i<n;i++){
    if(arr[i]==a){
        p=i;
        break;
    }
   }

    for(int i=n-1;i>=0;i--){
    if(arr[i]==b){
        q=i;
        break;
    }
   }
  

   if(p<q){
    cout<< p+(n-1)-q<<endl;
  }
   else{
    cout<< p+(n-1)-q-1<<endl;
   }
    
 
return 0;
 
}