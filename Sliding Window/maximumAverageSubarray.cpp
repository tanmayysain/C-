#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >>arr[i];
    }

    long int sum = 0;
    for (int i=0;i<k;i++){
        sum += arr[i];
    }

    long int maxSum = sum;

    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];

        maxSum = max(sum,maxSum);
    }
    cout<<(double)
    maxSum/k;
return 0;
 
}