#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int maxi=0;
    if(n==0||n==1) cout<<n<<endl;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
           if(i%2){
            dp[i]=dp[i/2]+dp[i/2+1];
            }
            else dp[i]=dp[i/2];
            maxi=max(maxi,dp[i]);
        }
        cout<< maxi;

return 0;
 
}