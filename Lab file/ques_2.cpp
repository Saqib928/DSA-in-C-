//WAP to take input 1 number from the user and print its square and cube.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any Number : ";
    int num;
    cin>>num;
    int square = num*num;
    int cube = num*num*num;
    cout<<"Square of Number : "<<square<<endl;
    cout<<"Cube of Number : "<<cube;
}