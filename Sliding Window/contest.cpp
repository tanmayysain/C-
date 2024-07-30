// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     vector<string>words(n);
//     for(int i=0;i<n;i++){
//         cin>>words[i];
//     }

//     int k=0;
//     vector<int> res;
//     vector<int>nums;
//     int x=nums.size();

//     for(auto i: words){
//      if(stoi(i)){
//         nums.push_back(stoi(i));
//      }
//     }
//     for(auto i: nums){
//         cout<<" "<<i;
//     }
 
// return 0;
 
// }

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 12345;

vector<vector<int>> productMatrix(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> p(n, vector<int>(m, 1));

    // Calculate the product of all elements except the current one
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int x = 0; x < n; ++x) {
                for (int y = 0; y < m; ++y) {
                    if (x != i || y != j) {
                        p[i][j] = (p[i][j] * grid[x][y]) % MOD;
                    }
                }
            }
        }
    }

    return p;
}

int main() {
    // Example usage
    vector<vector<int>> grid = {{1,2},{3,4}};
    vector<vector<int>> p = productMatrix(grid);

    for (int i = 0; i < p.size(); ++i) {
        for (int j = 0; j < p[0].size(); ++j) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
