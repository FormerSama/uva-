#include <bits/stdc++.h>
using namespace std;

int main() {
    char n[1001], m[1001];
    int dp[101][101];
    while (cin >> n >> m) {
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < strlen(n); i++) {
            for (int j = 0; j < strlen(m); j++) {
                if (n[i] == m[j])
                    dp[i+1][j+1] = dp[i][j] + 1;
                else
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
        cout << dp[strlen(n)][strlen(m)] << endl;
    }
    return 0;
}