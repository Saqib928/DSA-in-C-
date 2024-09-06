#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of rows : ";
    cin >> num;
    int row =1;
    while(row<=num){
        int space = 1;
        while(space <= num-row){
            cout<<"  ";
            space++;
        }
        int col = 1;
        while(col<=row){
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
    }
}