#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;
vector<int> divisor_count(MAX, 0);

void precompute_divisors() {
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divisor_count[j]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    precompute_divisors();  // Do once, in O(N log N)

    while (n--) {
        int x;
        cin >> x;
        cout << divisor_count[x] << '\n';
    }

    return 0;
}
