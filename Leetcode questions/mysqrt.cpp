#include<bits/stdc++.h>
using namespace std;
 
 int mysqrt(int x){  
     if(x==0)
        return 0;
        if(x==1)
        return 1;

        int small = mysqrt(x/2);
        int big = x*small;  
 }


int main(){
    int x;
    cin>>x;
    cout<<mysqrt(x)<<endl;

 
return 0;
 
}