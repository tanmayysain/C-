#include<iostream>
using namespace std;

void printarray(int arr[], int size ){
    cout<<" Printing the array "<<endl;
    for (int i= 0; i< size;i++){
        cout<< arr[i]<< " ";
    }
    cout<< " Printing Done "<< endl;

}
 
int main(){
    int num[15];

    cout<<"Value of 14 index " <<num[14]<<endl;

    // cout<< "Value of 20 index " <<num[20]<<endl;

    int second[3] = {5,6,11};

    cout<< "Value at 2 index "<< second[2]<< endl;

    int third[15]={2,7};

    int n = 15;
    printarray(third,15);

// initialising all location with 0
int fourth[10]= {0};
n=10;
// print the array
printarray(fourth,10 );

int fifth[10]= {1};
n=10;

int fifthsize= sizeof(fifth)/sizeof(int);
cout<<"size of the fifth is "<< fifthsize<< endl;


char ch[5]= {'a', 'b', 'c', 't', 'q'};
cout<< ch[3] << endl;

cout<< "Printing the array "<< endl;

for(int i =0; i<5; i++){

    cout<< ch[i]<< " ";
}
cout<< "Printing the array"<< endl;

    cout<<endl<< " Everything is fine "<< endl<< endl;

    return 0;
}