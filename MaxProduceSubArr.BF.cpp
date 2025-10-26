#include<bits/stdc++.h>
using namespace std;

int MaxPro( vector <int> &arr, int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j= i; j<n; j++){
            int  product = 1;
            for(int k =i; k<=j; k++){
                product = product * arr[k];
            }
            maxi = max(maxi, product);
        }
    }
return maxi;
}
int main(){
    int n; cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<MaxPro(arr,n);
    return 0;
}
//TC - ~~ O(n^3)
//SC - O(1)