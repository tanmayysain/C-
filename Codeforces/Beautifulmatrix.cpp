#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length();
    int Q;
    cin >> Q;
    while (Q--) {
        int x;
        cin >> x;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (S[i] == '1') {
                ans++;
            }
            if (i + x < n && S[i+x] == '1') {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
 
/*int main(){
    int arr[5][5],moves;
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
     cin>>arr[i][j];

     if(arr[i][j]== 1){
      moves =abs(i-2)+abs(j-2);
     }
       }
    }
       
   cout<<moves;

return 0;
 
}*/