#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
    map<char,int>mp;
    int maxi = INT_MIN;
    int i=0,j=0;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<k){
            j++;
        }
        else if(mp.size()==k){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
        }
    }
    cout<<maxi;
 
return 0;
 
}