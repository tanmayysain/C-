#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;

    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            s[i]='[.]';
        }
    }
    cout<<s<<endl;
return 0;
 
}