#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int color[4], cnt=0 ;
    for(int i=0;i<4;i++){
        cin>>color[i];
    }

    sort(color,color+4);

    for(int i=0;i<4;i++){
        if(color[i]==color[i+1]){
            cnt += 1;
        }
    }
    cout<<cnt;
 
return 0;
 
}