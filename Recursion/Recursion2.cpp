#include<iostream>
using namespace std;

/*void reachome(int src, int des){

    cout << " source " << src << " destination " << des <<endl;
    if( src == des){
    cout<< "Pahuch gaya" << endl;
    return ;
    }

    src++;
    reachome(src, des);
}
 
int main(){
    int des =10;
    int src = 1;

    reachome(src,des);


return 0;
}*/

/*#include<iostream>
using namespace std;

//fibonacci series 

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
 
int main(){
    int n;
    cin>>n;

    int ans = fib(n);
    cout<< ans << endl;

return 0;
}*/

#include<iostream>
using namespace std;
 
 void saydigit(int n, string arr[]){
    if(n==0){
        return ;
        }

        int digit = n % 10;
        n = n/10;
       
        saydigit(n,arr);

        cout << arr[digit] << " ";
    }
int main(){

    string arr[10] = {"Zero", "One","Two", "Three", "Four", "Five","Six", "Seven", "Eight", "Nine"} ;
    
    int n;
    cin>>n;

    cout<<endl<<endl;

    saydigit(n,arr);

    cout<<endl<<endl;

return 0;
}