#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a=0;
    cin>>n;
    vector<int>arr;
    int exit[n],enter[n];
    for(int i=0;i<n;i++){
        cin>>exit[i]>>enter[i];
    }
    for(int i=0;i<n-1;i++){
         a = (a-exit[i])+ enter[i];
       arr.push_back(a);
    }

    sort (arr.begin(),arr.end());
    int b = arr.size();
    cout<<arr[b-1];
 
return 0;
 
}