#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    int n = 0 , m = 0;
    cin>>s;
   for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i] <='z'){
        n++;
    }
    else if(s[i]>='A' && s[i]<='Z'){
        m++;
     }
   }

   if(n>=m){
     transform(s.begin(),s.end(), s.begin(),::tolower);
   }

   else{
    transform(s.begin(),s.end(), s.begin(),::toupper);
   }

   cout<<s<<endl;
   
return 0;
 
}