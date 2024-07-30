#include<bits/stdc++.h>
using namespace std;

int MAX_YEAR = 9999;
int MIN_YEAR = 1800;

bool isLeapYear(int year){
        return (((year %4) && (year%100 != 0)) || (year %400 ==0));
    }

bool isValidDate(int d, int m , int y){
        if(y >MAX_YEAR || y<MIN_YEAR) return false;
        
        if(m<1 || m>12) return false;
        if(d<1 || d>31) return false;

        if(m==2){
            if(isLeapYear(y)) return (d<=29);
            else return (d<=28);
        }

        if(m==4 || m==6 || m==8 || m==11){
            return  (d<=30);
        }

        return true;
    }
 
int main(){
    isValidDate(31,2,2003)? cout<<"YES" : cout<<"NO";
return 0;
 
}