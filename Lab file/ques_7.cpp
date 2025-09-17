//WAP to take input a 3-digit number from the user and print the square of the middle digit.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Three digit Number : ";
    cin>>num;
    int count=0;
    int ans;
    while(num>0){
        int digit = num%10;
        count++;
        if(count==2){
            ans=digit*digit;
        }
        num/=10;
    }
    if(count==3){
    cout<<"Square of the middle digit : "<<ans<<endl;     
    }
    else{
        cout<<" ! You enter invalid length of Number ";
    }
}