#include<bits/stdc++.h>
using namespace std;

int findMaxIndex(vector<vector<int>> &mat, int n, int m , int colNo){
    int maxVal = -1;
    int index =-1;
    for(int i =0; i<n; i++){
        if(mat[i][colNo]>maxVal){
            maxVal = mat[i][colNo];
            index = i;
        }
    }
    return index;
}

pair<int,int> FindPeak(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    int low =0, high = m-1;
    while(low<= high ){
        int mid = (low+high)/2;
        int maxRowIndex = findMaxIndex(mat,n, m , mid);
        if (maxRowIndex == -1) return {-1, -1};
        int left = mid-1 >= 0 ? mat[maxRowIndex][mid-1] : INT_MIN;
        int right = mid+1 < m ? mat[maxRowIndex][mid+1] : INT_MIN;
        if((mat[maxRowIndex][mid] > left) && (mat[maxRowIndex][mid] > right))
        return {maxRowIndex,mid};
        else if(mat[maxRowIndex][mid]<left) high = mid-1;
        else low = mid+1;
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
         pair<int,int> ans = FindPeak(matrix);
    cout<<ans.first<<"  "<<ans.second;

    return 0;
}
//TC = O(log base 2 m * n)
    