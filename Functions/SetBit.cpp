#include <iostream>
using namespace std;
int countbit(int a){
    int ans =0;
    while(a){
        a = a & (a-1);
        ans++;
    }
    return ans;
}
int main(){
    int a , b;
    cout<<"Enter any two Number : ";
    cin >> a >> b;
    cout<<"The Total Number of Bit in both Number : "<< countbit(a)+countbit(b) <<endl;
}