#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n,-1);
    dp[0]=0;
    for(int i=1;i<=100;i++){
        int left = dp[i-1]+abs(arr[i]-arr[i-1]);
        int right=INT_MAX;
        if(i>1) right=dp[i-2]+abs(arr[i]-arr[i-2]);
        dp[i]=min(left,right);
    }

    cout<<dp[n-1];
 
return 0;
 
}