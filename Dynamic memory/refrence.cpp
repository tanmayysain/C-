#include<iostream>
using namespace std;
 /*void update1(int n){
    n++;
 }
 void update2(int &n){
    n++;
 }
int main(){
    int n=5;

    cout<< "before " << n <<endl;
    update1(n);
    cout<< "after " << n <<endl;
 update2(n);
 cout<<n<<endl;

return 0;
}*/
int getsum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n ;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0; i<n; i++){
       cin>> arr[i]; 
    }
    int ans = getsum(arr,n);

    cout <<"answer is "<< ans << endl;
    return 0;
}
