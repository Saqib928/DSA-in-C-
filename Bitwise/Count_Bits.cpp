#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin >> num;
    int ans = 0;
    while(num){
        if(num &1){
            ans++;
        }
        num = num >>1;
    }
    cout<<"Number of Bit is : "<<ans<<endl;
}