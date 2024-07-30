#include<iostream>
using namespace std;

void print(int arr[], int s , int e){

    for (int i=s; i<=e ; i++ ){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

}
bool binarysearch(int *arr, int s, int e, int k){

cout<< endl;
    print (arr,s,e);

    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    cout<<"Value of mid is "<< arr[mid] << endl;

    if(arr[mid] == k){
        return true;}

    if(arr[mid] < k){
      return  binarysearch(arr, mid+1,e,k);
    }

    else {
        return binarysearch(arr, s, mid-1, k);
    }
}
 
int main(){
     int arr[11]= {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout<< " Present or not " << binarysearch(arr, 0 , 10, key) << endl;
    
return 0;
}