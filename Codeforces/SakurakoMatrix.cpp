#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x=1;
    for(int i=1;i<=128;i+=i){
        x+=x;
    }

    cout<<x<<endl;;
 
return 0;
 
}