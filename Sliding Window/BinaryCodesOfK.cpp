#include<bits/stdc++.h>
using namespace std;

bool hasAllCode(string s, int k){
    // string s;
    // cin>>s;
    int n = s.length();
    // int k;
    // cin>>k;
    set<string>st;
    for(int i=0;i<n-k;i++){
        string substr = s.substr(i,k);
        st.insert(substr);
    }

    if(st.size()==pow(2,k)){
        return 1;
    }
    else{
        return 0;
    }
}
 
int main(){
    string s;
    cin >> s;
    int k;
    cin>>k;
    if (hasAllCode(s, k)) {
        cout << "Yes";
    }
    else{
        cout<<"No";
    }
return 0;
 
}