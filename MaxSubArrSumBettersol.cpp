#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int MaximumSubarraySum (vector <int> &arr, int n){
   int  maxi = INT_MIN;
   for(int i =0; i<n; i++){
     int sum = 0;
    for(int j = i;j <n; j++){
          sum += arr[j];
          maxi = max(sum, maxi);
    }
   }
   return maxi;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the array element"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<MaximumSubarraySum(arr,n);
    return 0;
}
// TC -- O(n^2)
// Sc -- O(1)