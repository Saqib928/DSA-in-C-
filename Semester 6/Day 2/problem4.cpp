#include<iostream>
#include<vector>
using namespace std;
void getSumAbsoluteDifferences(vector<int>& nums) {
    int size = nums.size();
    vector<int> result(size);
    vector<int> pre(size);
    vector<int> suff(size);
    pre[0] = nums[0];
    suff[size - 1] = nums[size - 1];
    for (int i = 1; i < size; i++) {
        pre[i] = pre[i - 1] + nums[i];
        suff[size-i-1] = suff[size-i] + nums[size-i-1];
    }
    for(int i=0;i<size;i++){
        result[i]=((i*nums[i]-pre[i])+(suff[i]-(size-i-1)*nums[i]));
    }
    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";
    }
}
vector<int> OptimizegetSumAbsoluteDifferences(vector<int>& nums) {
    int size = nums.size();
    vector<int> result(size);
    int st = 0;
    for(int i=0;i<size;i++) st+=nums[i];
    int psum = 0;
    for(int i=0;i<size;i++){
        int ssum= st-psum-nums[i];
        result[i]=((i*nums[i]-psum)+(ssum-(size-i-1)*nums[i]));
        psum+=nums[i];
    }
    return result;
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
    getSumAbsoluteDifferences(nums);
    OptimizegetSumAbsoluteDifferences(nums);
}