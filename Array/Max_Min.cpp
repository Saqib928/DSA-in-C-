#include <iostream>
using namespace std;
int getmax(int arr[],int size){
    int maxi = INT32_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int getmin(int arr[],int size){
    int mini = INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin >> size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i<<" : ";
        cin >> arr[i];
    }
   cout<<"Maximum Element in array : "<< getmax(arr,size) << endl;
   cout<<"Minimum Element in array : "<< getmin(arr,size) << endl;
}