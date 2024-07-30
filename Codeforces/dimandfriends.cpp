#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        sum+=m;
    }
    int nways=0;
    for(int i=5;i>=1;i--){
        if(((sum+i)%(n+1))!=1){
            nways++;
        }
    } 
    cout<<nways<<endl;
return 0;
 
}