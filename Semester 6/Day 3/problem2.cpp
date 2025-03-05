#include<iostream>
#include<vector>
using namespace std;
void construct2DArray(vector<int>& original, int m, int n) {
    int s = original.size();
    if(s!=n*m){
        cout<<"!Error";
    }
    vector<vector<int>> ans(m,vector<int>(n));
    int index =0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=original[index];
            index++;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void optimizeconstruct2DArray(vector<int>& original, int m, int n) {
    if (original.size() != m*n){
        cout<<"!Error";
    }
    vector<vector<int>> ans(m,vector<int>(n));
    for(int i=0;i<original.size();++i){
        ans[i/n] [i%n] = original[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cout<<"Enter the Value of element "<<i<<" : ";
        cin>>arr[i];
    }
    int m,n;
    cout<<"Enter the row and col number for 2D Matrix : ";
    cin>>m>>n;
    cout<<"2D Array"<<endl;
    construct2DArray(arr,m,n);
    cout<<"Optimize 2D Array"<<endl;
    optimizeconstruct2DArray(arr,m,n);
}