#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minToll(vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n + 1);
    dp[0] = 0; // No cost to start at the base
    dp[1] = cost[0]; // Cost to step onto the first stair
    for (int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1];
    }
    return dp[n];
}

int main() {
    int n;
    cout<<"Enter Number of levels : ";
    cin>>n;
    vector<int> cost(n);
    int price;
    for(int i=1;i<=n;i++){
        cout<<"Enter the toll price of level "<<i<<" : ";
        cin>>price;
        cost.push_back(price);
    }
    cout << "Minimum toll to reach the top: " << minToll(cost) << endl;
    return 0;
}
