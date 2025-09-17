#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount : ";
    cin >> n;
    switch(1){
        case 1 :
        cout<<" 100 Rupees Notes are : "<<n/100<<endl;
        n = n%100;
        case 2 :
        cout<<" 50 Rupees Notes are : "<<n/50<<endl;
        n = n%50;
        case 3 :
        cout<<" 20 Rupees Notes are : "<<n/20<<endl;
        n = n%20;
        case 4 :
        cout<<" 1 Rupees Notes are : "<<n/1<<endl;
        n = n%1;
    }
    return 0;
}