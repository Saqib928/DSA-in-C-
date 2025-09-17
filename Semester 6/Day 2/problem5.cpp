#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the length of Row : ";
    cin>>row;
    cout<<"Enter the length of Column : ";
    cin>>col;
    vector<vector<int>> vec(row+1, vector<int> (col+1, 0));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the value for Row "<<row<<" and column "<<col<<" : "<<endl;
        }
    } 
}