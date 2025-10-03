#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector< vector<int>> RotateArray( vector< vector<int>> &arr, int n ){
    vector < vector<int>> ans(n,vector<int>(n));
    for(int i =0; i<n; i++ ){
        for(int j =0; j<n; j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }
    return ans;
}
int main(){
int n;
cin>>n;
vector<vector<int>> arr(n,vector<int>(n));
for(int i =0; i<n; i++){
    for(int j =0; j<n; j++){
    cin>>arr[i][j];
} 
}
vector <vector<int>> ans = RotateArray(arr,n);
for(int i =0; i<n; i++){
    for(int j =0; j<n; j++){
    cout<<ans[i][j]<<" ";
}
cout<<endl;
}
return 0;
}

//TC - O(N^2)
//SC - O(N^2)
