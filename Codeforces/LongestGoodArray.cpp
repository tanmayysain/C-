#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int max = 0 ,curr=0;
        int diff = r-l;

        while(true){
            if(curr+(max+1)<=diff){
                curr+=(max+1);
                max++;
            }
            else{
                break;
            }
        }
        cout<<max+1<<endl;
    }
 
return 0;
 
}