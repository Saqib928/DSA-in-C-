#include <iostream>
#include <vector>
using namespace std;

int dragonStrength(int n) {
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;
    vector<int> dp(n + 1);
    dp[1] = 1; // Generation 1
    dp[2] = 1; // Generation 2
    dp[3] = 2; // Generation 3
    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the generation number: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input. Generation number must be at least 1." << endl;
        return 1;
    }

    cout << "Dragon strength in generation " << n << ": " << dragonStrength(n) << endl;
    return 0;
}
