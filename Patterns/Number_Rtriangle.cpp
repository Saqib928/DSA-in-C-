#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number of Row : ";
    cin >> num;
    int row = 1,ToPrint = 1;
    while(row<=num){
        int col = 1;
        while(col<=row){
            cout<<ToPrint++<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}