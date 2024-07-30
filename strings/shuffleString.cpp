#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int ind[n];
    for(int i=0;i<n;i++){
        cin>>ind[i];
    }
    for(int i=0;i<n;i++){
        s[ind[i]]++;
    }
    cout<<s<<endl;
 
return 0;
 
}