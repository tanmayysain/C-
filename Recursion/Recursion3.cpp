#include<iostream>
using namespace std;
 
 //sorting array through recursion

/*bool isSorted(int *arr, int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1])
    return false;

    else {
        bool remainingpart = isSorted(arr+1, size-1);
        return remainingpart;
    }
}
 
int main(){
    int arr[5]= {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else 
    cout<<"Array is not sorted"<<endl;

return 0;
}*/

#include<iostream>
using namespace std;
int getSum(int *arr , int size){

    if(size == 0){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }
    int remainingpart = getSum(arr+1 , size-1);
    int sum = arr[0]+remainingpart;
}
 
int main(){
    int arr[5]= {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr , size);

    cout<< " SUM is " << sum << endl;

return 0;

}