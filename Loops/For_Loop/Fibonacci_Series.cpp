#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter series length : ";
    cin >> num;
    int a =0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<num;i++){
        int next_num = a+b;
        cout<<next_num<<" ";

        a=b;
        b=next_num;
    }
}