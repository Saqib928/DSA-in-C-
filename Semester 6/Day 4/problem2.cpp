#include<bits/stdc++.h>
using namespace std;
int Ibinarysearch(vector<int>arr,int s,int e,int key){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int Rbinarysearch(vector<int>arr,int s,int e,int key){
    if(s>e) return -1;
    int mid =s+(e-s)/2;
    if(arr[mid]==key) return mid;
    if(key>arr[mid]){
        Rbinarysearch(arr,s,mid-1,key);
    }
    else{
        Rbinaryserch(arr,mid+1,mid-1,key);
    }
    return -1;
}
int main(){
    int size,key;
    cout<<"Enter the Size of Array : ";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cout<<"Enter the value  for index "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the value for search : ";
    cin>>key;
    int s = 0, e=size-1;
    cout<<"Answer is : "<<Ibinarysearch(arr,s,e,key);
    Rbinarysearch(arr,s,e,key);
}