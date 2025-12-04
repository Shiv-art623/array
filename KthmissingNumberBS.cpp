#include<bits/stdc++.h>
using namespace std;

int KthMissingno(vector<int> &arr, int k){
    int n = arr.size();
    int low =0, high = n-1;
    while(low<= high){
        int mid = (low+high)/2;
        int missing = arr[mid]-(mid+1);
        if(missing <k) low = mid+1;
        else high = mid-1;
    }
    return low+k;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<KthMissingno(arr,k);
}
//TC = O(logn) // we could also use high+1+k