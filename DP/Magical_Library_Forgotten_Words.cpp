#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minEnergy(string book1, string book2) {
    int m = book1.size();
    int n = book2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (book1[i - 1] == book2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int lcs = dp[m][n];
    return (m - lcs) + (n - lcs);
}

int main() {
    string book1, book2;
    cout << "Enter spell list for Book 1: ";
    cin >> book1;
    cout << "Enter spell list for Book 2: ";
    cin >> book2;

    cout << "Minimum magical energy required: " 
         << minEnergy(book1, book2) << endl;
    return 0;
}
