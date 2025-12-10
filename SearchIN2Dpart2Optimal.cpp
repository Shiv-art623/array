#include<bits/stdc++.h>
using namespace std;
pair<int,int> CoordinatesOftargetEle(vector<vector<int>> &mat, int target){
    int n = mat.size();
    int m = mat[0].size();
    int row = 0, col = m-1;
    while(row<n && col>=0){
        if(mat[row][col] == target) return {row,col};
        else if(mat[row][col] < target) row ++;
        else col--;
    }
    return {-1,-1};
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
    pair<int,int> ans = CoordinatesOftargetEle(matrix,target);
    cout<<ans.first<<"  "<<ans.second;
    return 0;
}
//Tc = Worst case O(n+m)