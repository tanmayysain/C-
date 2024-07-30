#include<bits/stdc++.h>
using namespace std;

// Recursive  DP
// vector<int>dp(100,-1);

// int solve(int n){
//     if(n<=2){
//         return 1;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n] = solve(n-1)+solve(n-2);
//     return dp[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<solve(n);
 
// return 0;
 
// }

//Iterative DP
vector<int> dp(100, -1);
int main(){
    int n;
    cin>>n;
    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]; 
    }
    cout<<dp[n];
}

