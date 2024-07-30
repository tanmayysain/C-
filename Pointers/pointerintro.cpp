#include<iostream>
using namespace std;
 
int main(){
   /* int num=5;
    cout<<num<<endl;
    int *p=&num;
    cout<<p<<endl;
    (*p)++;
    cout<<*p<<endl;*/

    int arr[10]={23,122,41, 67};
    cout<<"address of first memory block "<<arr<<endl;
    cout<<"value at first "<<*arr<<endl;    
    cout<<"value at first incremented "<<*arr+1<<endl;    
    cout<<"value at second "<<*(arr+1)<<endl;    
    cout<<"value at third "<<*(arr+2)<<endl;   

    int i=3;
    cout<<i[arr]<<endl;



return 0;
}