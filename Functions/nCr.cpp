#include <iostream>
using namespace std;
int Factorial(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}
int fact(int n,int r){
    int nume=Factorial(n);
    int deno = Factorial(r)*Factorial(n-r);
    return nume/deno;
}
int main(){
    int a,b;
    cout<<"Enter the Number for Factorial : ";
    cin >> a >> b;
    cout<<"The factorial is : "<<fact(a,b)<<endl;
}