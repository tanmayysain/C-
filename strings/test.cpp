#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    // cout<<s<<endl;
    vector<int>seive(1000001,0);

    for(int i = 2 ; i<=1000000 ; i++ ){
        for(int j = 2; j*i<=1000000; j++){
            seive[j*i] = 1;
        }
    }

    seive[1] = 1;

    vector<int>ans(s.size()+1,0);
    for(int i =0 ; i<s.size(); i++){
        if(s[i]=='0')continue;
        int a = 0;
        for(int j = 0; j<5 && i+j<s.size(); j++){
            a*=10;
            a+=s[i+j]-'0';
            if(seive[a]==0){
                // cout<<a<<" "<<((i-1>=0)?ans[i-1]:-1)<<" ";
                ans[i+j] += (i-1>=0)?ans[i-1]:1;
                // cout<<ans[i+j]<<endl;
            }
        }
    }
    // for(auto it:ans)cout<<it<<" ";cout<<endl;
    cout<<ans[s.size()-1]<<endl;


 
return 0;
 
}