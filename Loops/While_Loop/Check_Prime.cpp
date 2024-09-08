#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the checking Prime : ";
    cin >> num;
    int i =2;
    while(i<num){
        if(num%i==0){
            cout<<num<<" is not Prime Number";
            return 0;
        }
        i++;
    }
    cout<<num<<" is Prime number"<<endl;
    return 0;
}