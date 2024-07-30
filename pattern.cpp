#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

int countWays(int n) {
    // dp[i][j] represents the number of ways to make a sum of i using j fours
    int dp[n + 1][3] = {0};

    // Base cases:
    dp[0][0] = 1;  // One way to make a sum of 0: no numbers used

    // Fill the dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= 2; ++j) {
            // Not using 4:
            dp[i][j] = dp[i][j] % MOD + dp[i - 1][j] % MOD;

            // Using 4 (if j < 2):
            if (i >= 4 && j < 2) {
                dp[i][j] = (dp[i][j] % MOD + dp[i - 4][j] % MOD) % MOD;
            }
        }
    }

    // Return the total ways (considering all possible number of fours used)
    return (dp[n][0] % MOD + dp[n][1] % MOD + dp[n][2] % MOD) % MOD;
}

int main() {
        int n;
        cin >> n;

        int ways = countWays(n);
        cout << ways << endl;

    return 0;
}
