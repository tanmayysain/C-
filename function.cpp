#include<iostream>
using namespace std;

/*void printcounting(int num){
    for ( int i = 1; i <= num; i++)
     {

        //cout<< i << " ";

    }
        //cout<<endl;

    }*/

   /* bool iseven(int a ){

        if(a&1){
            return 0;
        }
        else {
            return 1;
        }
    }*/

    /*bool isPrime(int n){
        for(int i=2; i<n; i++){
            if(n % i==0){
                return 0;
            }
        }
        return 1;
    }*/

     /*int factorial(int n) {
        int fact = 1;

        for(int i=1; i<=n; i++ ){
            fact= fact*i;
        }
        return fact;
    }

    int nCr(int n, int r){
        int num = factorial(n);
        
        int denom = factorial(r)*factorial(n-r);

        return num/denom;
    }*/

    int power(int num1, int num2){

        int ans = 1;

        for(int i=1; i<=num2; i++){
            ans = ans * num1;
        }
        return ans;
    }
    int main(){
        int c,d;

        cin>> c>> d;

        int answer = power(c,d);

        cout<<" Answer is " << answer << endl;

        return 0;

}