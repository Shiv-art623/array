#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int MaximumSubarraySum (vector <int> &arr, int n){
    int maxi = INT_MIN;
    int sum = 0;
    int start, ansStart = -1, ansEnd = -1;
    for(int i=0; i<n ;i++){
        if(sum == 0) start = i;
        sum+= arr[i];
        if(sum>maxi) maxi = sum;
        ansStart= start;
        ansEnd = i;
         if (sum< 0 ) sum =0;
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
 