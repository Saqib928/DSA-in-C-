#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& dp)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int s = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i >= 0)
        {
            s += solve(n - i, dp);
            s %= 1000000007;
        }
    }
    return dp[n] = s;
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << solve(n, dp);
}