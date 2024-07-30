#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
int main(){
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int vasya=0,petya=0;
    int m;
    cin>>m;
    int x;
    while(m--){
       // int x;
        cin>>x;
        int index=0;
        while(arr[index]!=x)
        index++;
        vasya+=index+1;
        petya+=(n-index);
    }*/
    int n;
    cin>>n;
    int v[100001];
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        v[x]=i;
    }
    int m;
    cin>>m;
    ll int vasya=0;
    ll int petya=0;
    int b;
    while(m--){
        cin>>b;
        vasya+=v[b];
        petya+=(n+1-v[b]);
    }
    cout<<vasya<<" "<<petya<<endl;
 

return 0;
 
}