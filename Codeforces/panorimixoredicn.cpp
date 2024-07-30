#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string s1,s2;
  cin>>s1>>s2;

  for(int i=0;i<s1.size();i++){
    if(s1[i]!=s2[i]){
        s1[i]='1';
    }
    else{
        s1[i]='0';
    }
  }

  cout<<s1;


    /*int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0; i<15;i++){
        if(arr[i]==n){
            if(arr[i+1]==m){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        
    }*/
 
return 0;
 
}