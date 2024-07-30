#include<iostream>
using namespace std;
void update (int **p2){
    //p2=p2+1;
  //*p2=*p2 +1;
    **p2 = **p2 +1;
    

}
 
int main(){
    int i =5;
    int* p = &i;
    int** p2 = &p;

    cout<<p<<endl;
    cout<<*p2<<endl;
     cout<< p2<<endl; 

    update(p2);

    cout<<i<<endl;
    cout<<*p2<<endl;
     cout<< p2;

return 0;
}