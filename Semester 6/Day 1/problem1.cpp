#include <iostream>
#include <vector>
using namespace std;

void printans(const vector<int>& nums);

void prefixrunningSum(vector<int>& nums) {
    int size = nums.size();
    vector<int> pre(size);
    pre[0] = nums[0]; 
    for (int i = 1; i < size; i++) {
        pre[i] = pre[i - 1] + nums[i]; 
    }
    printans(pre);
}

void suffixrunningSum(vector<int>& nums) {
    int size = nums.size();
    vector<int> suff(size);
    suff[size - 1] = nums[size - 1];
    for (int i = size - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + nums[i]; 
    }
    printans(suff);
}

void bothpresuffix(vector<int>& nums) {
    int size = nums.size();
    vector<int> pre(size);
    vector<int> suff(size);

    pre[0] = nums[0];
    suff[size - 1] = nums[size - 1];
    for (int i = 1; i < size; i++) {
        pre[i] = pre[i - 1] + nums[i];
        suff[size-i-1] = suff[size-i] + nums[size-i-1];
    }
    cout << "Prefix Sum:" << endl;
    printans(pre);
    cout << "Suffix Sum:" << endl;
    printans(suff);
}

void printans(const vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << "Sum till index " << i << " is: " << nums[i] << endl;
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "Prefix Running Sum:" << endl;
    prefixrunningSum(nums);

    cout << "Suffix Running Sum:" << endl;
    suffixrunningSum(nums);

    cout << "Both Prefix and Suffix Sums:" << endl;
    bothpresuffix(nums);

    return 0;
}