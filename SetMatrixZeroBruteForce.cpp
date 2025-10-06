#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void markRow(vector <vector<int>> &arr,int i,int m){
    for(int j =0; j<m; j++){
        if(arr[i][j]!=0)
        arr[i][j]= -1;
    }
}
void markColumn(vector <vector<int>> &arr, int j , int n){
    for(int i = 0; i<n; i++){
        if(arr[i][j]!=0)
        arr[i][j]=-1;
    }
}
void SetMatrixZero(vector <vector<int>> &arr, int row, int column){
    for(int i =0; i<row; i++){
        for(int j =0; j<column;j++){
            if(arr[i][j]==0){
                markRow(arr,i,column);
                markColumn(arr,j,row);

            }
        }
    }
    //Convert -1 back to zero-
    for(int i=0; i<row;i++){
        for(int j=0; j<column; j++){
            if(arr[i][j]==-1)
            arr[i][j]=0;
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector <vector<int>> arr(n,vector<int>(m));
        for(int i=0; i<n ; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    SetMatrixZero(arr,n,m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" "; 
               }
               cout<<endl;
    }
    return 0;

}
// TC - O((n*m )*(n+m)+(n*m))
// SC - O(1) 