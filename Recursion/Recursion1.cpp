#include<iostream>
using namespace std;
 //factoial of a no.
/* int factorial(int n){
    if(n==0)
    return 1;

    int small= factorial(n-1);
    int big = n*small;

    return big;
 }
int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout << ans << endl;
   

return 0;
}*/

//power of 2 power n;

/*#include<iostream>
using namespace std;

int power(int n){

    //base case
    if(n==0){
        return 1;
    }

    //recursive relation

    int small=power(n-1);
    int big = 2*small;

    return big;


}
 
int main(){
    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;

return 0;
}*/

#include<iostream>
using namespace std;
 
void print(int n){
    if(n==0){
    return ;
    }
    print(n-1);
    cout<< n <<endl;
    
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);

return 0;
}