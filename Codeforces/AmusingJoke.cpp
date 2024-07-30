#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string a,b,c,res;
    cin>>a>>b>>c;

    res = a+b;

    sort(res.begin(),res.end());
    sort(c.begin(),c.end());

    if(res == c){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
 
return 0;
}