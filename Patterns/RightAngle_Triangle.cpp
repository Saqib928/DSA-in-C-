#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of row : ";
    cin >> num;
    int row=1;
    while(row<=num){
        int col = 1;
        while(col<=row){
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
    }
}