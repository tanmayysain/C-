#include<bits/stdc++.h>
using namespace std;

void printvec(vector<strings> &v){
    cout<< "size : " << v.size() << endl;

    for(int i=0; i< v.size(); ++i){
        // v.size() ===>O(1)
        cout<<v[i]<< " ";
    }
    cout<< endl;
}
 
int main(){
  //  double a[10];
   // vector <int> v(10,3);
    /*vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printvec(v);
        v.push_back(x);  //O(1)

      }
      printvec(v);*/

      /*vector<int> v;
      v.push_back(7);
      v.push_back(6);
      printvec(v);
      v.pop_back();
      printvec(v);
      vector<int> v2 = v;  // O(n) copying elements
*/

vector <string> v;
int n;
 cin>>n;
 for(int i=0; i <n ; ++i){
    string s;
    cin>>s;
    v.push_back(s);

 }
printvec(v);
 
 
}