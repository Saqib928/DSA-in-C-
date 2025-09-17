#include <iostream>
#include <vector>
using namespace std;

// Function Declarations
vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k);
void fxn(vector<vector<int>> &ans, vector<vector<int>> &mat, int i, int j, int n, int m, int k);
void printarr(vector<vector<int>> &mat);

int main()
{
    int row, col;
    cout << "Enter the Number of rows: ";
    cin >> row;
    cout << "Enter the Number of columns: ";
    cin >> col;

    // Initialize the matrix
    vector<vector<int>> mat(row, vector<int>(col, 0));
    cout << "Enter the values of the Matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value for Row " << i << " and Column " << j << " : ";
            cin >> mat[i][j];
        }
    }

    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    // Compute the result
    vector<vector<int>> result = matrixBlockSum(mat, k);

    // Print the result
    cout << "Resultant Matrix:" << endl;
    printarr(result);

    return 0;
}

// Function to compute the matrix block sum
vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
{
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fxn(ans, mat, i, j, n, m, k);
        }
    }
    return ans;
}

// Helper function to compute the sum for each cell
void fxn(vector<vector<int>> &ans, vector<vector<int>> &mat, int i, int j, int n, int m, int k)
{
    int r1 = i - k, r2 = i + k;
    if (r1 < 0)
        r1 = 0;
    if (r2 >= n)
        r2 = n - 1;

    int c1 = j - k, c2 = j + k;
    if (c1 < 0)
        c1 = 0;
    if (c2 >= m)
        c2 = m - 1;

    int t = 0;
    for (int i1 = r1; i1 <= r2; i1++)
    {
        for (int j1 = c1; j1 <= c2; j1++)
        {
            t += mat[i1][j1];
        }
    }
    ans[i][j] = t;
}

// Function to print the matrix
void printarr(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}