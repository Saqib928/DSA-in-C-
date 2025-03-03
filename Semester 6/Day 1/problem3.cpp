#include<iostream>
#include<vector>
using namespace std;
int minStartValue(vector<int>& nums) {
    int size = nums.size();
    vector<int> ans(size);
    ans[0]=nums[0];
    int mini = ans[0];
    for(int i=1;i<size;i++){
        ans[i]=ans[i-1]+nums[i];
        if(mini>ans[i]){
            mini = ans[i];
        }
    }
    int ans;
    if(mini<0){
        ans = (mini*-1)+1;
        return ans;
    }else{
        return 1;
    }
}
int main(){
    int size;
    cout<<"Enter the number of element : ";
    cin>>size;
    vector<int> nums(size);
    for(int i=0;i<nums.size();i++){
        cout<<"Enter the value of element "<<i+1<<" : ";
        cin>>nums[i];
    }
    cout<<"Minimum Starting Value is : "<<minStartValue(nums);
}