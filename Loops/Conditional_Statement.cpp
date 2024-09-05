#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of A : ";
    cin >> a;
    if(a>0){
        cout<<"A is Positive number ";
    }
    else{
        if(a==0){
            cout<<"A is zero";
        }
        else{
            cout<<"A is Negative number ";
        }
    }
}