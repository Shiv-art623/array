#include<bits/stdc++.h>
using namespace std;

int upperBound( vector<int> &arr, int x, int n){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        //may be the ans
        if(arr[mid]>x){
            ans = mid;
            high = mid-1; //look for more small index on left
        }
        else low = mid+1;
    }
    return ans;
}
int countsmallEqual(vector<vector<int>> &mat, int n , int m, int x){
    int cnt =0;
    for(int i =0; i<n; i++){
        cnt+=upperBound(mat[i], x, m);
    }
    return cnt;
}
int median(vector<vector<int>> &mat, int n, int m){
    int low = INT_MIN, high = INT_MIN;
    for(int i = 0; i<n; i++){
        low = min(low,mat[i][0]);
        high = max(high, mat[i][m-1]);
    }
    int req = (n*m)/2;
    while(low<=high){
        int mid = (low+high)/2;
        int smallEqual = countsmallEqual(mat, n, m, mid);
        if(smallEqual<= req) low = mid+1;
        else high = mid-1;
    }
    return low;
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
    cout<<median(matrix, n, m);
    return 0;
}
//TC = O(log (10^9) * n * log(m))

