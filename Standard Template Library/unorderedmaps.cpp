#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<< m.size() <<endl;
    for(auto &pr : m){
        cout<< pr.first << " " << pr.second << endl;
       }
}
 
int main(){
    unordered_map<int,string> m;
    m[1]= "abc";  //O(l)
    m[5]= "cdc";
    m[3]= "acd";
    m[6]="a";
    auto it = m.find(3);  //O(1)
    if(it != m.end())
    m.erase(it);  //log(1)

    print(m);
 
return 0;
 
}