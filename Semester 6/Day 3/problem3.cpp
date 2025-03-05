#include<bits/stdc++.h>
using namespace std;
void matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    int total = m * n;
    if(r * c != total)  cout<<"!Error";
    vector<vector<int>> ans(r, vector<int>(c));
        for(int i = 0; i < total; i++) 
            ans[i / c][i % c] = mat[i / n][i % n];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
    cout<<endl;
    }
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
    int m,n;
    cout<<"Enter resize array row length : ";
    cin>>m;
    cout<<"Enter resize array col length : ";
    cin>>n;
    cout<<"New Resize Matrix"<<endl;
    matrixReshape(mat,m,n);

}