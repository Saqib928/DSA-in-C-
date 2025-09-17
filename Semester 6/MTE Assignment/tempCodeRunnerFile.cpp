#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> num)
{
    int n = num.size();
    int total_sum = accumulate(num.begin(), num.end(), 0); // Calculate total sum
    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Right sum is total_sum - left_sum - num[i]
        if (left_sum == total_sum/2)
        {
            return i; // Equilibrium index found
        }
        left_sum += num[i]; // Update left sum
    }

    return -1; // No equilibrium index found
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << solve(num);
}
