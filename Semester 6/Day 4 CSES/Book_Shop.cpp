#include <bits/stdc++.h>
using namespace std;
int fxn(vector<int> &prf, vector<int> &wt, int n, int w, vector<vector<int>> &dp)
{
    for (int i = 0; i < wt.size(); i++)
    {
        if (n == 0 || w == 0)
            return 0;
        if (dp[n - 1][w] != -1)
            return dp[n - 1][w];
        int inc = 0;
        if (w >= wt[n - 1])
        {
            inc = prf[n - 1] + fxn(prf, wt, n - 1, w - wt[n - 1], dp);
        }
        int exc = fxn(prf, wt, n - 1, w, dp);
        return dp[n - 1][w] = max(inc, exc);
    }
}
int tab_fxn(vector<int> &prf, vector<int> &wt, int n, int w){
    vector<vector<int>> dp(n + 1, vector<int>(w + 1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            int inc=0;
            if(j>=prf[i-1]) inc=wt[i-1]+dp[i-1][j-prf[i-1]];
      int exc=dp[i-1][j];
            dp[i][j]=max(inc,exc);
        }
    }
    return dp[n][w];
}
int main()
{
    int n, x;
    cin >> n >> x;
  
    vector<int> price(n);
    vector<int> pages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    cout << tab_fxn(price, pages, n, x);
}