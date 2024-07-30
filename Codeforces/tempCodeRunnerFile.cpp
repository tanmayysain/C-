#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int s = k*l/n;
    int j = c*d;
    int m = p/np;

    int small = min(s,min(j,m)) / n;

    cout<<small<<"\n";

 
return 0;
 
}