#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxLoot(vector<int>& coins) {
    int n = coins.size();
    if (n == 0) return 0;
    if (n == 1) return coins[0];
    vector<int> dp(n);
    dp[0] = coins[0];
    dp[1] = max(coins[0], coins[1]);
    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + coins[i]);
    }
    return dp[n - 1];
}

int main() {
    int n;
    cout << "Enter the number of treasure rooms: ";
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter the amount of gold in room "<<i+1 <<" : ";
        cin >> coins[i];
    }

    cout << "Maximum gold that can be looted: " << maxLoot(coins) << endl;
    return 0;
}
