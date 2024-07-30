#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char s[100];
    cin>>s;
    int cnt=0;
    int len = strlen(s);
    sort(s,s+len);
    for(int i=0;i<len;i++){
      if(s[i]!=s[i+1]){
        cnt++;
      }
    }

    if(cnt%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }

    else{
        cout<<"IGNORE HIM!"<<endl;
    }

 
return 0;
 
}