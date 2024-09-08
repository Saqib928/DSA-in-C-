#include <iostream>
using namespace std;
int main(){
    float Fahrenheit;
    cout<<"Enter the value of Fahrenheit : ";
    cin >> Fahrenheit;
    float Celsuis = (5.0/9) * (Fahrenheit-32);
    cout << Fahrenheit << " F = "<<Celsuis<<" C";
}