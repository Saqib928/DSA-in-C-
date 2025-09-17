#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestCommonSubsequence(string scrollA, string scrollB) {
    int m = scrollA.size();
    int n = scrollB.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (scrollA[i - 1] == scrollB[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main() {
    string scrollA, scrollB;
    cout << "Enter symbols for Scroll A: ";
    cin >> scrollA;
    cout << "Enter symbols for Scroll B: ";
    cin >> scrollB;

    cout << "Length of the longest chain of common symbols: " 
         << longestCommonSubsequence(scrollA, scrollB) << endl;
    return 0;
}
