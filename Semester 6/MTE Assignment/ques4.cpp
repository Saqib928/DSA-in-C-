#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int solve(vector<int>num,int k){
    int n = num.size(),sum=0;
    if(k>=n || k<= 0) return -1;
    for(int i=0;i<k;i++){
        sum+=num[i];
    }
    int i=k,maxi=sum;
    while(i<n){
        sum=sum+num[i]-num[i-k];
        maxi=max(maxi,sum);
        i++;
    }
    return maxi;
}
int main(){
    int n,k;cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<solve(num,k);
}