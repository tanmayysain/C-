#include<stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int *arr, int n){
    int i, j;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printArray(int *arr , int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        printf("\n");
    }
}

int main(){
     int arr[] = {12,11,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);

    printArray(arr,n);

    return 0;
}