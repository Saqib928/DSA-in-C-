#include <bits/stdc++.h>
using namespace std;

        int solve(vector<int>& nums) {
            int size = nums.size();
            vector<int> pre(size);
            pre[0]=0;
            int sum =nums[0];
            for(int i=1;i<size;i++){
                sum+=nums[i];
                pre[i]=pre[i-1]+nums[i-1];
            }
            for(int i=0;i<size;i++){
                if(pre[i]==sum-pre[i]-nums[i]){
                    return i;
                }
            }
            return -1;
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
