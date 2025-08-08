#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7;
vector<int> dp;
int n;
 
int rec(int level) {
    if (level == 0) return 1;
    if (level < 0) return 0;
    if (dp[level] != -1) return dp[level];
 
    int ans = 0;
    for (int j = 1; j <= 6; j++) {
        ans = (ans + rec(level - j)) % MOD;
    }
    return dp[level] = ans;
}
 
int main() {
    cin >> n;
    dp.assign(n + 1, -1);
    cout << rec(n) << endl;
}