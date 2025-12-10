#include<bits/stdc++.h>
using namespace std;


int lowerBound( vector<int> &arr, int n, int x){
    int low =0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>= x){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}
int RowWithmax1(vector<vector<int>> &matrix, int n, int m){
    int cnt_max = 0;
    int index = -1;
    for(int i =0; i<n; i++){
        int cnt_ones = lowerBound(matrix[i],m, 1);
        int cnt = m-cnt_ones;
        if(cnt>cnt_max){
            cnt_max = cnt;
            index =i;
        }
    }
    return index;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<RowWithmax1(matrix,n,m);
    return 0;
}
//TC = O(n)*log base 2 m