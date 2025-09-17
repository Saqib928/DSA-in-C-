#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> coins(n);

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    long long ps = 0;
    for(int i=0;i<n;i++){
        if(coins[i]<=ps+1) ps+=coins[i];
        else{
            cout<<(ps+1);
            return 0;
        }
    }
    cout<<ps+1;
    return 0;
}
