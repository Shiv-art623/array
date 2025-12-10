#include<bits/stdc++.h>
using namespace std;

bool SearchInmatrix(vector<vector<int>> &matrix, int target){
 int n = matrix.size();
 int m = matrix[0].size();
 int low = 0, high = n*m-1;
 while(low<=high){
    int mid = (low+high)/2;
    int row = mid/m;
    int col = mid%m;

    if(matrix[row][col]== target) return true;
    else if(matrix[row][col]< target) low = mid+1;
    else high = mid-1;
 }
 return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cin>>target;
    cout<<SearchInmatrix(matrix,target);
    return 0;
}
//TC = O(loh base 2(n*m))
