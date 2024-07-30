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
    int sum = 0, maxi=INT_MIN;
    while(j<n){
         sum += arr[j];

        if(sum<k){
            j++;
        }
        else if(sum>k){
            while(sum>k){
                sum-=arr[i];
                i++;
                
            }
            j++;
        }
        else if(sum == k){
            maxi = max(maxi, (j-i+1));
            j++;
        }
    }
    cout<<maxi<<endl;
 
return 0;
 
}