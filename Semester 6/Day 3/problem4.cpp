#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
void printarr(vector<vector<int>> mat){
    int m=mat.size();
    int n=mat[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row, col;
    cout << "Enter the Number of row : ";
    cin >> row;
    cout << "Enter the Number of col : ";
    cin >> col;
    vector<vector<int>> mat(row, vector<int>(col, 0));
    cout << "Enter the value of Matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value for Row " << i << " and column " << j << " : ";
            cin >> mat[i][j];
        }
    }
    cout<<"Array Before Rotate"<<endl;
    printarr(mat);
    rotate(mat);
    cout<<"Array After Rotate"<<endl;
    printarr(mat);
}