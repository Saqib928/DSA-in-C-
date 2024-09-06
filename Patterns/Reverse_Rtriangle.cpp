#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of row : ";
    cin >> num;
    int row=1;
    while(row<=num){
        int col=1,space=1;
        while(space<row){
            cout<<"  ";
            space++;
        }
        while(col<=num-row+1){
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
    }
}