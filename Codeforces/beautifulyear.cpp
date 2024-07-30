#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int y,a,b,c,d;
    cin>>y;
    while(1){
        y++;
        a= y/1000;
        b= (y/100)%10;
        c= (y/10)%10;
        d= y%10;
       if(a !=b && b!=c && c!=d && a!=c && a!=d && b!=d){
        break;
       }

    }
    cout<<y<<endl;
 
return 0;
 
}