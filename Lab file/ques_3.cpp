//WAP to calculate and print the area and circumference of a circle.
#include<iostream>
using namespace std;
int main(){
    double pi = 3.1415926535897;
    int r;
    cout<<"Enter the Radius of Circle : ";
    cin>>r;
    cout<<"Area of Circle is : "<<pi*r*r<<endl;
    cout<<"Circumference of Circle is : "<<2*pi*r<<endl;
}