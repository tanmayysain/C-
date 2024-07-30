#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //swap words in a sentence
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n-1;i++){
        if(isalpha(s[i]) && !isalpha(s[i+1])){
            cout<<" ";
            }else if(!isalpha(s[i]) && isalpha(s[i+1])){
                char c = s[i];
                s[i] = s[i+1];
                s[i+1] = c;
                }
                }
                cout<<s<<endl;

return 0;
 
}