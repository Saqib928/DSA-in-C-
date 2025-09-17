#include <iostream>
#include <vector>
using namespace std;

int TeasureChest(int coins[], int num_coins, int value) {
    vector<int> dp(value + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < num_coins; i++) {
        for (int j = coins[i]; j <= value; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[value];
}

int main() {
    int value;
    cout << "Enter the chest opening value: ";
    cin >> value;

    int num_coins;
    cout << "Enter the number of coins: ";
    cin >> num_coins;

    int coins[num_coins];
    for (int i = 0; i < num_coins; i++) {
        cout << "Enter the value of coin " << i + 1 << ": ";
        cin >> coins[i];
    }

    cout << "Number of Ways to Open the Chest: " 
         << TeasureChest(coins, num_coins, value) << endl;

    return 0;
}
