#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&arr ,int k, int mid){
    int j=0, ans=1;
    int sum=0;
    for(int i=0;i<mid;i++){
       sum+=arr[i];
    }
    int totalSum = arr[mid-1]*mid;
    if(totalSum-sum<=k){
        return 1;
    }

    for(int i=mid;i<arr.size();i++){
        sum-=arr[j];
        sum+=arr[i];
        totalSum = arr[i]*mid;
        if(totalSum-sum<=k){
            return 1;
            j++;
        }
    }
    return 0;
}
 
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    sort(arr.begin(),arr.end());
    int low=1, high = n, ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(arr,k,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high = mid-1;
            }
    }
    cout<<ans<<endl;

 
return 0;
 
}