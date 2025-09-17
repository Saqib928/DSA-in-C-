#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> num) {
    int n = num.size(), t = 0, pre = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        t += num[i];
    }

    // Traverse the array and check for the equilibrium point
    for (int i = 0; i < n; i++) {
        int suf = t - pre - num[i];
        pre += num[i];
        if (pre == suf) {
            return true; // Found a valid split
        }
    }

    return false; // No valid split found
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    if (solve(num)) {
        cout << "true";
    } else {
        cout << "False";
    }
}