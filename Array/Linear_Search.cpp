#include <iostream>
using namespace std;
bool Search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;
    cout<<"Enter the Size of Array : ";
    cin >> size;
    int arr[100];
     for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i<<" : ";
        cin >> arr[i];
    }
    int key;
    cout<<"Enter the Key ELement : ";
    cin >> key;
    bool found = Search(arr,size,key);
    if(found){
        cout<<"Key Present in Array "<<endl;
    }
    else{
        cout<<"Key NOT Present in Array "<<endl;
    }
}