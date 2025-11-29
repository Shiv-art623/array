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
 int low = maxEle, high = sum;
 while(low<= high){
    int mid = (low+high)/2;
    int reqDays = fun(arr, mid);
    if(reqDays<= days){
        high = mid-1;
    }
    else low = mid+1;
 }
 return low;
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
// TC = O(log(sum-maxEle))*O(n) + O(n)