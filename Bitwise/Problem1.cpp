#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinCost(vector<vector<int>>& cost, int person, int mask, int n, vector<vector<int>>& dp) {
        if (person == n) return 0;
        if (dp[person][mask] != -1) return dp[person][mask];
        
        int minCost = INT_MAX;
        for (int job = 0; job < n; job++) {
            if (!(mask & (1 << job))) {
                minCost = min(minCost, cost[person][job] + 
                                findMinCost(cost, person + 1, mask | (1 << job), n, dp));
            }
        }
        return dp[person][mask] = minCost;
    }
};

int main() {
    int n;
    cout << "Enter number of workers/jobs: ";
    cin >> n;
    
    cout << "Enter the cost matrix (" << n << "x" << n << "):" << endl;
    vector<vector<int>> cost(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
    
    Solution sol;
    n = cost.size();
    vector<vector<int>> dp(n, vector<int>(1 << n, -1));
    
    cout << "Minimum cost of assignment: ";
    cout << sol.findMinCost(cost, 0, 0, n, dp) << endl;
    
    return 0;
}