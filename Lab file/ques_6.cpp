//WAP to take input a 3-digit number from the user and print the sum of the first and third digits.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Three digit Number : ";
    cin>>num;
    int count=0;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        count++;
        if(count!=2){
            sum+=digit;
        }
        num/=10;
    }
if(count==3){
    cout<<"Sum of first and third digit is : "<<sum<<endl;     
}
else{
        cout<<" ! You enter invalid length of Number ";
    }
}