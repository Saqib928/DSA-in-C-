#include <bits/stdc++.h>
using namespace std;

void fxn() {
    map<int, int> mp;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        mp[x]++;
    }

    for(auto it = mp.begin(); it != mp.end(); ++it) {
        if(it->second >= 2) {
            mp[it->first + 1] += it->second - 2;
        }
    }

    bool flag = false;
    for(auto &i : mp) {
        if(i.second >= 2) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fxn();
    }
    return 0;
}
