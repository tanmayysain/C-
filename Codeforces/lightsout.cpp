#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
        if(n==0){
        return 1;
        }
        if(x==0){
            return 0;
        }
        if(n==1){
            return x;
        }

        return x* myPow(x,n-1);
       
    }

int main(){
/*int a11,a12,a13,a21,a22,a23,a31,a32,a33;

cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;

cout<< ((a11+a12+a21)%2==0 ? "1":"0") << ((a12+a11+a13+a22)%2==0 ? "1":"0" ) << ((a13+a12+a23)%2==0 ? "1":"0") << endl;
cout<< ((a21+a11+a22+a31)%2==0 ? "1":"0") << ((a12+a21+a22+a23+a32)%2==0 ? "1":"0" ) << ((a23+a22+a13+a33)%2==0 ? "1":"0") << endl;
cout<< ((a32+a31+a21)%2==0 ? "1":"0") << ((a31+a33+a32+a22)%2==0 ? "1":"0") << ((a33+a32+a23)%2==0 ? "1":"0") << endl;
*/

int x,n;
cin >> x >> n;

double big = myPow(x,n);

cout << big << endl;


}