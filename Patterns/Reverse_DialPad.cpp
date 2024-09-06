#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Deminsion : ";
    cin >> n;
    int num = n*n;
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=n){
            cout<< num--<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}