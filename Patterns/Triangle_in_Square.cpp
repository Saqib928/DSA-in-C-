#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the dimension : ";
    cin >> num;
    int row = 1;
    while(row<=num){
        int j = 1;
        while(j <= num-row+1){
            cout<< j <<" ";
            j++;
        }
        j=1;
        while(j<=(row-1)*2){
            cout<<"* ";
            j++;
        }
        j=num-row+1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        row++;
    }
}