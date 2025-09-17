#include<bits/stdc++.h>
using namespace std;
int solve(int n,int st){
    if(n==0) return st;
    int a=INT_MIN;
    int t=n;
    while(t!=0){
        int b=t%10;
        a=max(a,b);
        t/=10;
    }
    return solve(n-a,st+1);
}

int fxn(int n,vector<int>&dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    string s = to_string(n);

    int mn = INT_MAX;
    for(auto i: s){
        int x = i-'0';
        if(x!=0 && n-x>=0){
            mn=min(mn,fxn(n-x,dp));
        }
    }
    return dp[n]=mn+1;
}



int maxDigit(int num) {
    int maxD = 0;
    while (num > 0) {
        maxD = max(maxD, num % 10);
        num /= 10;
    }
    return maxD;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int mxd = maxDigit(i);
        if (i - mxd >= 0) {
            dp[i] = min(dp[i], dp[i - mxd] + 1);
        }
    }
    
    cout << fxn(n,dp);
}