#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(x+1));

    vector<int>nextState(x+1,0); //dp[n][k]
    nextState[0] = 1;

    // for(int i=0;i<n;i++){
    //     dp[i][0]=1;
    // }

    for(int i=n-1;i>=0;i--){
        vector<int>currentState(x+1,0);
        for(int sum=1;sum<=x;sum++){
            currentState[0]=1;
            int notpick = nextState[sum];
            int pick = 0;
            if(a[i]<=sum){
             pick = currentState[sum-a[i]];
            }
            currentState[sum] = (notpick+pick)%MOD;
        }
        nextState = currentState;
    }

    cout<<nextState[x]<<endl;
return 0;
 
}

