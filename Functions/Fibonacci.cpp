#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2){
    return n-1;}
    int ans=1,a=0,b=1;
    for(int i=3;i<=n;i++){
        ans = a+b;
        a = b;
        b = ans;
        cout<<ans<<" ";
    }
            cout<<endl;
    return ans;
}
int main(){
    int a;
    cout<<"Enter the digit till you want to count series : ";
    cin >> a;
    cout<<"Number Given place is : "<<fibo(a)<<endl;
}