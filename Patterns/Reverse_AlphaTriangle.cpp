#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number of Row : ";
    cin >> num;
    int row = 1;
    while(row<=num){
        char alpha = 'A'+ num -row;
        int col=1;
        while(col<=row){
            cout<< alpha++ <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}