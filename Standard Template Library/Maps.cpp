#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<< m.size() <<endl;
    for(auto &pr : m){
        cout<< pr.first << " " << pr.second << endl;
       }
}
 
int main(){
    map<int,string> m;
    m[1]= "abc";  //O(log(n))
    m[5]= "cdc";
    m[3]= "acd";
    m.insert({4,"afg"});
   auto it = m.find(5);

   if(it !=m.end())

   m.erase(it);
   /*if(it == m.end()){
    cout<< "NO value";
   }
   else{
    cout<<(*it).first<< " " <<(*it).second<<endl;
   }*/
    //map<int,string> :: iterator it;
    /*for(it = m.begin(); it != m.end(); it++){
    cout<< (*it).first <<" "<<(*it).second<<endl;
    }*/
   print(m);


return 0;
 
}