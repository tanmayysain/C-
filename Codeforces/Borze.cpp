#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string borze, decode;
    cin>>borze;
    int n = borze.size();
    for( int i=0;i<n;i++){

    if(borze[i]== '.')
        decode += '0';

    else if(borze[i]=='-'){
        if(borze[i+1]=='.')
            decode += '1';

        else if(borze[i+1]=='-')
           decode += '2';
           i++;

    }
    }

    cout<< decode;
return 0;
 
}