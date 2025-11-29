#include <bits/stdc++.h>
using namespace std;

int fun( vector<int> weights, int capacity){
    int n = weights.size();
    int days = 1, load = 0;
    for(int i =0; i<n; i++){
     if(load+weights[i]>capacity){
        days = days+1;
        load = weights[i];
     }
     else load+=weights[i];
    }
    return days;
}
int leastCapacity(vector <int> arr, int days){
    int maxEle = *max_element(arr.begin(), arr.end());
    int sum = 0;
    for(int i =0; i<arr.size(); i++ ){
        sum+=arr[i];
    }
    for(int cap = maxEle; cap<=sum; cap++){
        int daysReq = fun(arr,cap);
        if(daysReq<= days){
            return cap;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i <n; i++){
        cin>>arr[i];
    }
    int days;
    cin>>days;
    cout<<leastCapacity(arr,days);
    return 0;
}
// TC = O(maxEle-minEle+1)* O(n)+O(n)  nearly O(n^2)