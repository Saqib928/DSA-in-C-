#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the dimension of Square : ";
    cin >> num;
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<" "<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}