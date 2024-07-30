#include<iostream>
using namespace std;
 
int main(){
   int arr[4]={2,7,11,15 };
    int k;
    cin>>k;
    for(int i=1; i<4; i++){
        if(arr[i]+arr[i-1]==k){
            return 
        }
    }

return 0;
}
