#include<bits/stdc++.h>
using namespace std;

int MaxProduct( vector <int> &arr, int n){
    int prefix = 1; int suffix = 1;
    int maxi = INT_MIN;
    for(int i =0; i<n; i++){
        if(prefix==0) prefix = 1;
        if(suffix==0) suffix = 1;
        prefix = prefix*arr[i];
        suffix = suffix*arr[n-i-1];
        maxi = max(maxi, max(prefix, suffix));
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<MaxProduct(arr, n);
    return 0;
}
//TC - O(n)
//SC - O(1)