#include<bits/stdc++.h>
using namespace std;
int FindMax( vector<int> &arr){
    int maxi = INT_MIN;

    for(int i =0; i<arr.size(); i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int calculateTotalHrs( vector<int> &arr, int hourly){
    int totalhrs = 0;
    for(int i =0; i<arr.size(); i++){
        totalhrs+=ceil((double)arr[i]/hourly);
    }
    return totalhrs;
}
int EatingBanana( vector<int> &arr, int hour){
    int low =1, high = FindMax(arr);
    while(low<=high){
        int mid = (low+high)/2;
        int total_hrs = calculateTotalHrs(arr, mid);
        if(total_hrs<= hour){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int hour;
    cin>>hour;
    cout<<EatingBanana(arr,hour);
    return 0;
}
//TC = [O(n)*log(maxEle)]