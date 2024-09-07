#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number you want to convert : ";
    cin >> num;
    int ans = 0;
    int i =1;
    while(num>0){
        int digit = num & 1;
        ans = (digit * i) + ans;
        num = num >> 1;
        i*=10;
    }
    cout<<" decimal number is : "<<ans<<endl;
}