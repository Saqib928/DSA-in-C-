#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestPalindromeSubsequence(string s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) dp[i][i] = 1;

    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s;
    cout << "Enter the chat archive: ";
    cin >> s;

    cout << "Length of the longest mirrored sequence: " 
         << longestPalindromeSubsequence(s) << endl;
    return 0;
}