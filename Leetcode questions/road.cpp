#include<bits/stdc++.h>
using namespace std;
// int traffic(int n, int m, vector<int> vehicle) {
// 	int x = vehicle.size();
// 	int cnt_1=0,cnt_0=0;
// 	for(int i=0;i<x;i++){
// 		if(vehicle[i]==0){
// 			cnt_0++;
// 		}
// 		else{
// 			cnt_1++;
// 		}
// 	}

// 	if(m<=cnt_0){
// 		cnt_1+=+m;
// 	}
// 	else{
// 		cnt_1+=cnt_0;
// 	}
// }

 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int currSum=0, maxSum=0;
   for(int i=0;i<n;i++){
    if(arr[i]==1){
        ++currSum;
    }
    else if(m>0){
        ++currSum;
        --m;
    }
    else{
        currSum=0;
    }
    maxSum = max(currSum,maxSum);
   }
    cout<<maxSum<<endl;
return 0;
 
}
