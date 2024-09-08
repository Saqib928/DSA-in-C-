#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number for Checking : ";
    cin >> num;
    int check;
    for(int i=2;i<num;i++){
        if(num%i==0){
            check = 0;
        }
    }
    if(check==0){
        cout<< num<<" is not a Prime Number ";
    }
    else{
        cout<< num<<" is a Prime Number";
    }
}