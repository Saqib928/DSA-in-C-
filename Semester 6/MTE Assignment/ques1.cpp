#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>num,int l,int r){
    vector<int> pre(num.size());
    pre[0]=num[0];
    for(int i=1;i<=num.size();i++){
        pre[i]=pre[i-1]+num[i];
    }
    return pre[r]-pre[l-1];
}
int main(){
    int n;
    cout<<"Enter The Size of Array : ";
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the value of Element "<<i<<" : ";
        cin>>num[i];
    }
    int l,r;
    cout<<"Enter the left index : ";
    cin>>l;
    cout<<"Enter the right index : ";
    cin>>r;
    cout<<"Sum from L to R : "<<solve(num,l,r);
}