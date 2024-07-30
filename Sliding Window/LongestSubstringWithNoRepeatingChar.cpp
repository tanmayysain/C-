#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int maxi = INT_MIN;
    map<char,int>mp;
    int i=0,j=0;
    while(j<n){
        mp[s[j]]++;
        if(mp.size()==j-i+1){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1){
            while(mp.size()<j-i+1){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<maxi<<endl;

 
return 0;
 
}