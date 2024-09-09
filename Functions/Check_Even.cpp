#include <iostream>
using namespace std;
bool CheckEven(){
    int a;
    cout<<"Enter the Number for checking : ";
    cin >> a;
    if(a&1){
        return 0;
    }
    return 1;
}
int main(){
    if(CheckEven()){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
}