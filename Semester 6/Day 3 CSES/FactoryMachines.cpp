#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(long long mid, const vector<int>& arr, long long p) {
    long long temp = 0;
    for (int time : arr) {
        temp += mid / time;
        if (temp >= p) return true;
    }
    return false;
}

int main() {
    long long n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long l = 0;
    long long h = *min_element(arr.begin(), arr.end()) * t;
    long long res = -1;

    while (l <= h) {
        long long mid = l + (h - l) / 2;
        if (possible(mid, arr, t)) {
            res = mid;         // found a valid time
            h = mid - 1;       // try to find a smaller time
        } else {
            l = mid + 1;       // need more time
        }
    }

    cout << res << endl;
    return 0;
}
