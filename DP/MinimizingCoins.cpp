#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& coins, vector<int>& dp, int n) {
    if (n==0){
        return 0;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++) {
        if (n - coins[i] >= 0) {
            int sub_res = solve(coins, dp, n - coins[i]);
            if (sub_res != INT_MAX) {
                mini = min(mini, sub_res+1);
            }
        }
    }
    return dp[n] = mini;
}

int main() {
    int n, money;
    cin >> n >> money;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    vector<int> dp(money + 1, -1);
    int result = solve(coins, dp, money);
    if (result == INT_MAX) {
        cout << -1;
    } else {
        cout << result<<endl;
    }
}