#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
    if (n <= 2) return n;
    vector<int> dp(n + 1);
    dp[1] = 1; // 1 way to reach level 1
    dp[2] = 2; // 2 ways to reach level 2
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2]; // Sum of ways to reach i-1 and i-2
    }
    return dp[n];
}

int main() {
    int n;
    cout<<"Enter the Number of Stairs :";
    cin>>n;
    cout << "Number of ways to climb " << n << " levels: " << climbStairs(n) << endl;
    return 0;
}
