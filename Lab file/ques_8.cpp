//WAP to take input a 4-digit number from the user and print all its digits.
#include <iostream>
using namespace std;
void printdigit(int num){
    if(num<=0){
        return;
    }
    printdigit(num/10);
    cout<<"value of "<<" place digit is : "<<num%10<<endl;
}
int main(){
    int num;
    cout<<"Enter a Four Digit Number : ";
    cin>>num;
    printdigit(num);
}