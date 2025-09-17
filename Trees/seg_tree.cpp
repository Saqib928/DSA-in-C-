#include<bits/stdc++.h>
using namespace std;
void build(vector<int>& seg, vector<int>& a, int l, int r, int idx) {
    if (l == r) {
        seg[idx] = a[l];
        return;
    }
    int mid = l+ (r-l) / 2;
    build(seg, a, l, mid, 2 * idx + 1);
    build(seg, a, mid + 1, r, 2 * idx + 2);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}
int maxQuery(vector<int>& seg, int l, int r, int ql, int qr, int idx) {
    if (ql <= l && qr >= r) {
        return seg[idx];
    }
    if (ql > r || qr < l) {
        return INT_MIN;
    }
    int mid = l + (r - l) / 2;
    return max(maxQuery(seg, l, mid, ql, qr, 2 * idx + 1), 
               maxQuery(seg, mid + 1, r, ql, qr, 2 * idx + 2));
}
void update(int idx, int value, vector<int>& seg, vector<int>& a, int l, int r, int segIdx) {
    if (l == r) {
        a[idx] = value;
        seg[segIdx] = value;
        return;
    }
    int mid = l + (r - l) / 2;
    if (idx <= mid) {
        update(idx, value, seg, a, l, mid, 2 * segIdx + 1);
    } else {
        update(idx, value, seg, a, mid + 1, r, 2 * segIdx + 2);
    }
    seg[segIdx] = max(seg[2 * segIdx + 1], seg[2 * segIdx + 2]);

}
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> seg(4 * n);
    while(q--){
        int l, r;
        cin >> l >> r;
        if (l < 0 || r >= n || l > r) {
            cout << "Invalid query range" << endl;
            continue;
        }
        build(seg, a, 0, n - 1, 0);
        int max_value = maxQuery(seg, 0, n - 1, l, r, 0);
        cout << "Maximum value in range [" << l << ", " << r << "] is: " << max_value << endl;
    }
}