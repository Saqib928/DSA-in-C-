#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number of Calulated the Sum : ";
    cin >> num;
    int sum=0;
    int i=1;
    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<"The Total Sum till Given Number is : "<<sum<<endl;
}