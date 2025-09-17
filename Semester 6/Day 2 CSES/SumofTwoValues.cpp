#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1; // Store 1-based index
    }

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;

    while (left < right) {
        long long sum = a[left].first + a[right].first;
        if (sum == x) {
            cout << a[left].second << " " << a[right].second << "\n";
            return 0;
        }
        if (sum < x)
            ++left;
        else
            --right;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
