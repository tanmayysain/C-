#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k,l,m,n,d,c=0;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }

    cout<< c ;
 
return 0;
 
}