#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number for convert : ";
    cin >> num;
    int ans =0;
    int place =1;
    while (num > 0)
    {
        int digit = num%10;
        if(digit==1){
            ans = ans + digit * place;
        }
        place*=2;
        num/=10;
    }
    cout << ans<<endl;
}