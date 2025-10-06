#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> SpiralMatrix(vector<vector <int>> &matrix){
    int n = matrix.size(); // row size
    int m = matrix[0].size(); //column size
    int left = 0; int right = m-1;
    int top = 0; int bottom = n-1;
    vector <int> ans;
    while(top<=bottom &&  left<= right){
        for(int i  = left; i<=right; i++ ){
         ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i = right; i>=left; i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
    }
        if(left<=right){
        for(int i = bottom; i>=top; i-- ){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int> (m));
    for(int i =0; i<n; i++){
     for(int j =0; j<m; j++){
        cin>>mat[i][j];
     }
    }
    vector<int> ans = SpiralMatrix(mat);
    for(int i =0; i<ans.size(); i++){
     cout<<ans[i]<<" ";
    }
    return 0;
}
// TC - O(n*m)+O(n*m)
//SC - o(n*m)