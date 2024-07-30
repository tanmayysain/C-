#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> weight(n);
    vector<int>val(n);

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    vector<vector<int>>dp(n+1,vector<int>(x+1,0));

    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            int w = weight[i-1];
            int value = val[i-1];

            int pick = (j>=w ? dp[i-1][j-w]+value : 0);
            int skip = dp[i-1][j];

            dp[i][j] = max(pick,skip);
        }
    }
    cout<<dp[n][x]<<endl;
 
return 0;
 
}