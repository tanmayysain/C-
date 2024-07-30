#include<bits/stdc++.h>
using namespace std;

bool isChar(char c){
    if((c>='A' && c<='Z')||(c>='a' && c<='z')){
        return true;
    }
    return false;
}

bool isDigit(char c){
    if(c>='0' && c<='9') return true;
    return false;
}

bool is_Valid_Email(string email){
    if(!isChar(email[0])){
        cout<< "The First letter of the email is not alphabet"<<endl;
        return 0;
    }

    int At=-1,dot=-1;
    for(int i=0;i<email.length();i++){
        if(email[i]=='@'){
            At = i;
        }
        if(email[i]=='.'){
            dot=i;
        }
    }

    if(At>dot){
        cout<<"@ is after the . Dot"<<endl;
        return 0;
    }

    if(At==-1 || dot==-1){
        cout<<"@ or .dot is missing in the email"<<endl;
        return 0;
    }
    return 1;
}
 
int main(){
    string s;
    cin>>s;
    bool ans = is_Valid_Email(s);

    if(ans) cout<<"Email is Valid"<<endl;
    else cout<<"Email is Invalid"<<endl;

 
return 0;
 
}