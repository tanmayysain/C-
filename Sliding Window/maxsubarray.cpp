#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=0;
    int mx = INT_MIN;
    int sum=0;

    while(j<n){
      sum += arr[j];
      if(j-i+1 <k){
        j++;
      }
      else if(j-i+1 == k){
        mx = max(sum,mx);
        sum = sum - arr[i];
        i++;
        j++;
      }
    } 
      cout<< (double)mx/k <<endl;
return 0;
 
}