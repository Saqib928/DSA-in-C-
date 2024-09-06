#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of Rows : ";
    cin >> num;
    int row = 1;
    while(row<=num){
        int space=1, j=1;
        while(space<=num-row){
            cout<<"  ";
            space++;
        }
        while(j<=row){
            cout<<j<<" ";
            j++;
        }
        j=row-1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        row++;
    }
}