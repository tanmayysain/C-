#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char letter[1000];
    set<char> distinct;
   // for(int i=0;i<1000;i++){
    cin>>letter;
    //}
    for(int i=0;i<strlen(letter);i++){
        if(letter[i]>='a' && letter[i]<='z'){
            if(distinct.find(letter[i]) == distinct.end()){
                distinct.insert(letter[i]);
            }
        }
    }
    cout<<distinct.size()<<endl;
    return 0;
 
}