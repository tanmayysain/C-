#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    for(int i=0;i<s.size();i++){
        cin>>s[i];
    }
    int min = s[0];
    for(int i=0;i<s.size()-1;i=i+2){
        if(min>s[i]){
            swap(min,s[i]);
        }
    }
 
return 0;
 
}