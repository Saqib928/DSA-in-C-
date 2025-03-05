#include <iostream>
#include <vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
    int maxi = 0;
    for(int row=0;row<accounts.size();row++){
        int sum =0;
        for(int col=0;col<accounts[row].size();col++){
            sum+=accounts[row][col];
        }
        maxi=max(maxi,sum);
    }
    return maxi;
}
int main(){
    int row,col;
    cout<<"Enter the Number of row : ";
    cin>>row;
    cout<<"Enter the Number of col : ";
    cin>>col;
    vector<vector<int>> mat(row, vector<int> (col, 0));
    cout<<"Enter the value of Matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the value for Row "<<i<<" and column "<<j<<" : ";
            cin>>mat[i][j];
        }
    }
    cout<<"Maximum Wealth from all people is : "<<maximumWealth(mat);
}