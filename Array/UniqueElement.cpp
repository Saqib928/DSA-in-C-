#include <iostream>
using namespace std;
int UniqueElement(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,88,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Unique Element in Array : "<<UniqueElement(arr,size);
}