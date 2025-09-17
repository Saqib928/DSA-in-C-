#include<bits/stdc++.h>
using namespace std;

void fxn() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int cnt=0;
    int op = 0,i=0;
    while(i<n){
        if(s[i]=='0'){
            cnt++;
            if(cnt==m){
                op++;
                cnt=0;
                i+=k-1;
            }
        }else{
            cnt=0;
        }
        i++;
    }
    
    cout << op << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fxn();
    }
    return 0;
}