#include <iostream>
using namespace std;
int Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,4,3,77,9,0};
    int size = sizeof(arr)/sizeof(int);
    Reverse(arr,size);
    PrintArray(arr,size);
}