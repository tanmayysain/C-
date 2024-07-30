#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,p,q,level;
    cin>>n>>p;
    set<int>result;
    for(int i=0;i<p;i++){
      cin>>level;
      result.insert(level);
    }

    cin>>q;
    for(int i=0;i<q;i++){
      cin>>level;
      result.insert(level);
    }

    if(result.size()==n){
      cout<<"I become the guy.";
    }
    else{
      cout<<"Oh, my keyboard!";
    }

return 0;
 
}