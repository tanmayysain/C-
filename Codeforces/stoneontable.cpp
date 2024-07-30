#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int b=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
         b++;
        }
    }

    cout<<b<<endl;
 
return 0;
 
}