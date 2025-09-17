#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,result=0;
    cin>>n;
    long long mx=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        mx=max(mx,x);
        result+=(mx-x);
    }
    cout<<result;
}