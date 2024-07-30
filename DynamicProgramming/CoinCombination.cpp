#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

// int solve(int sum, int fours, vector<vector<int>>&dp) {
// 	if (fours > 2 || sum < 0)return 0;
// 	if (!sum)return 1;
// 	if (dp[sum][fours] != -1)return dp[sum][fours];
// 	return
// 	    dp[sum][fours] =
// 	        (
// 	            (solve(sum - 1, fours, dp) % MOD) +
// 	            (solve(sum - 2, fours, dp) % MOD) +
// 	            (solve(sum - 4, fours + 1, dp) % MOD) +
// 	            (solve(sum - 6, fours, dp) % MOD)
// 	        ) % MOD;
// }

int main(){
    int n;
		cin >> n;
		vector<long long>v(n);
		for (int i = 0 ; i < n; i++)cin >> v[i];

		vector<long long>next(n, n);
		long long ng = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			next[i] = ng;
			if (v[i] > v[ng])ng = i;
		}

		long long ans =  0;
		for (int i = 0; i < n - 1; i++) {
			ans += (long long)(next[i] - i) * v[next[i]];
			i = next[i] - 1;
		}
		cout << ans << endl;
 
}