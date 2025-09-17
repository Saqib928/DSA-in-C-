#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum=0;
    for (int i = 0; i < n - 1; ++i)
    {
        long long a;
        cin>>a;
        sum+=a;
    }
    long long total = 1LL * n * (n + 1) / 2;
    cout<<total-sum<<endl;;
}