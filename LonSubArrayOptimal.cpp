#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
// Optimal Solution-- (Zero+Posotive)
int LonSubArray(vector <int> &arr, long long k){
    int left =0;
    int right =0;
    long long sum = arr[0];
    int maxlen= 0;
    int n = arr.size();
    while(right <n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen = max(maxlen, right-left+1);
        }
        right ++;
        if(right <n){
            sum += arr[right];
        }
    }
    return maxlen;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    long long k;
    cout<<"Enter the sum"<<endl;
    cin>>k;
    vector <int> arr(n);
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<LonSubArray(arr,k);
    return 0;
}
//Time Complexity-- at Worst case - O(2N)
//Space Complexity-- O(1)
