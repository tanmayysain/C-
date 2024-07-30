#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]);
    }
    cout<< sum;

    int k=sum;

    vector<vector<bool>>dp(n,vector<bool>(k+1,0));

    for(int i=0;i<n;i++) dp[i][0]=true;

    if(arr[0]<=k)
        dp[0][k]=true;

    for(int i=1;i<n;i++){
      for (int target = 1; target <= k; target++) {
        bool notTake = dp[i - 1][target];
        bool take = false;
            if (target >= arr[i]) take = dp[i - 1][target- arr[i]];
            dp[i][target]=take || notTake;
           }
    }

    int mini=1e9;
      for(int s1=0;s1<=sum/2;s1++){
        if(dp[n-1][s1]==true){
        int diff = abs(s1 - (sum - s1));
        mini = min(mini,diff);           
        }
    }
    cout<< mini<< " ";
 
return 0;
 
}