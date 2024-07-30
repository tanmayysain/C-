#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string u,l;
    cin>>u>>l;
    for(int i=0;i<u.length();i++){
        if(u[i]>='A' && u[i]<='Z')
        u[i]+=32;

        if(l[i]>='A'&& l[i]<='Z')
        l[i]+=32;

        if(u[i]>l[i]){
            cout<<"1";
            return 0;
        }
        if(u[i]<l[i]){
            cout<<"-1";
            return 0;
        }
    }

    cout<<"0"<<endl;
return 0;
 
}