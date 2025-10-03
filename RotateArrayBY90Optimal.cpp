#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void RotateArray (vector<vector<int>> &arr, int n){
    //Transpose of matrix
    for(int i =0; i<n-1 ;i++){
        for(int j =i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    //for reversing the rows
    for(int i =0; i<n; i++){
        //Here Row is arr[i] ok 
        reverse(arr[i].begin(), arr[i].end());
    }
}
int main(){
    int n;
    cin>>n;
    vector <vector <int>> arr(n,vector<int> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    RotateArray(arr,n);
    for(int i =0; i<n; i++){
        for(int j =0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//TC - O(n/2 * n/2)+ O(n * n/2)
//SC - O(1)