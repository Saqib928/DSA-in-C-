#include <iostream>
using namespace std;
int totalsum(int arr[],int size){
    if(size<=0){
        return 0;
    }
    return arr[size-1] + totalsum(arr,size-1);
}
int main(){
    int n;
    cout<<"Enter the size of Arrray : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<< "Total sum of Array Eleent : "<<totalsum(arr,n);

}
