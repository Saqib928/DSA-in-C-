#include<iostream>
#include<vector>
using namespace std;
int largestAltitude(vector<int>& gain) {
    int maxsum = 0;
    int i = 0;
    int cursum =0;
    while(i<gain.size()){
        cursum = cursum + gain[i];
        maxsum = max(maxsum,cursum);
        i++;
    }
    return maxsum;
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
    cout<<"Largest Altitude is : "<<largestAltitude(nums);
}