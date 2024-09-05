#include <iostream>
using namespace std;
int main (){
    int a = 32;
    int b = 2;
    cout<<"Value of A = "<< a<<endl<<"Value of B = "<<b<<endl; 
    cout<<" Arithmetical Operator "<<endl;
    //For Adding number we use '+'
    cout <<"A + B = "<<a+b<<endl;
    //For Subtracting number we use '-'
    cout <<"A - B = "<<a-b<<endl;
    //For Multiple number we use '*'
    cout <<"A * B = "<<a*b<<endl;
    //For Division number we use '/'
    cout <<"A / B = "<<a/b<<endl;
    //For modulous number we use '%'
    cout <<"A % B = "<<a%b<<endl;

    cout<<"Relational Operator "<<endl;
    bool first = a==b;
    cout <<"A == B = "<< first <<endl;
    bool Second = a>=b;
    cout <<"A >= B = "<< Second <<endl;
    bool third = a<=b;
    cout <<"A <= B = "<< third <<endl;
    bool forth = a!=b;
    cout <<"A != B = "<< forth <<endl;
    bool fifth = a<b;
    cout <<"A < B = "<< fifth <<endl;
    bool Sixth = a>b;
    cout <<"A < B = "<< Sixth <<endl;

    cout<<"Logical Operator"<< endl;
    bool And = (a>0)&&(b>0);
    cout<<"(A>0)&&(B>0) = "<<And<<endl;
    bool Or = (a<0)||(b>0);
    cout<<"(A<0)||(B>0) = "<<Or<<endl;
    bool Not = !(a>0);
    cout<<"!(A>0) = "<<Not<<endl;

}