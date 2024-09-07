#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two value : ";
    cin >>a >>b;
    cout<<" a & b = "<< (a&b) <<endl;
    cout<<" a | b = "<< (a|b) <<endl;
    cout<<" !a = "<< !a <<endl;
    cout<<" a ^ b = "<< (a^b) <<endl;
    // Shift Operators
    cout<<"Left Shift - "<<" a<<1 = "<<(a<<1)<<endl;
    cout<<"Right shift - "<<" b>>2 = "<<(b>>2)<<endl;
}