#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your Marks : ";
    cin>>marks;
    if(marks>=75){
        cout<<"You get First Division";
    }
    else if(marks<75 && marks>=50){
        cout<<"You get Second Division";
    }
    else if(marks<50 && marks>=35){
        cout<<"You pass the Exam";
    }
    else{
        cout<<"You get fail in Exam";
    }
}