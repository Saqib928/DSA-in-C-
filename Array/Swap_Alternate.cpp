#include <iostream>
using namespace std;
void SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[]={1,2,3,4,5,6,7,8};
    int odd[]={1,2,3,4,5};
    SwapAlternate(even,8);
    SwapAlternate(odd,5);
    PrintArray(even,8);
    PrintArray(odd,5);
}