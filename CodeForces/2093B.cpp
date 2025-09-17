#include<bits/stdc++.h>
using namespace std;

void fxn() {
    string s; cin>>s;
    int res=s.size()-1,last_i;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!='0'){
            last_i=i;
            break;
        }
    }
    for(int i=0;i<last_i;i++){
        if(s[i]=='0') res--;
    }
    cout<<res<<'\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fxn();
    }
    return 0;
}