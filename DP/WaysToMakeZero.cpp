#include<bits/stdc++.h>
using namespace std;
int fxn(int n,vector<int>& dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]= fxn(n/2,dp)+fxn(n/3,dp);
}
int main(){
    int n;cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fxn(n,dp);

    return 0;
}