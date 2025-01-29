#include <iostream>
using namespace std;
bool issorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    if(arr[n-1] > arr[n-2] && issorted(arr+1,n-1)){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin >> arr[i];
    }
    cout<<"The Given Array is sorted --> "<<issorted(arr,n);
}