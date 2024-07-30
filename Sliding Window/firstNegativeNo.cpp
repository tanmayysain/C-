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
    vector<int>v(n-k+1);
    queue<int>q;
    
    while(j<n){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        int windowSize = j-i+1;

        if(windowSize < k){
            j++;
        }

        else if( windowSize == k){
            if(q.empty()){
                v.push_back(0);
            }
            else{
                v.push_back(q.front());
                if(arr[i] == q.front()) {
                q.pop();
                }
            }
            i++;
            j++;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

 
return 0;
 
}