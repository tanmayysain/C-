#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, sum;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}

	int i=0,j=0, total=0;

	int maxi = INT_MIN;

	while(j<n){
		total+= arr[j];
		if(total < sum ){
			j++;
		}
		else if(total>sum){
			while(total > sum){
				total-=arr[i];
				i++;
				j++;
			}
		}
		else if(total == sum ){
			maxi = max(maxi,j-i);
			j++;
		}
	}
	cout<<maxi;
return 0;
}