#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long x;
    int b=0;
    cin>>x;
    string s = to_string(x);
    for(int i=0; i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            b++;
        }
    }

    if(b==4 || b== 7){
        cout<<"YES"<<endl;
    }

    else{
    cout<<"NO"<<endl;
    }


 
return 0;
 
}