#include<bits/stdc++.h>
using namespace std;

int maxAlternateSum(vector<int>& A) {
  int n = A.size();
  sort(A.begin(),A.end(), greater<int>());
  int sum1=0,sum2=0;
  for(int i=0;i<n;i++){
    if(n%2==0){
    if(i<n/2){
        sum1 += A[i];
    }
    else{
        sum2+= (-1)*A[i];
    }
    }else{
        if(i<(n/2)+1){
        sum1 += A[i];
    }
    else{
        sum2+= (-1)*A[i];
    }
    }
  }
    return sum1+sum2;
  
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }    
        int maxSum= maxAlternateSum(A);
        cout<<maxSum<<endl;
    }
    
return 0;
 
}