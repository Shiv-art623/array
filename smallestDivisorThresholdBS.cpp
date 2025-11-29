#include<bits/stdc++.h>
using namespace std;

int sumbyD( vector <int> &arr, int d){
    int n = arr.size();
    int sum =0; 
    for(int i =0; i<n; i++){
        sum+= ceil((double)arr[i]/d);
    }
    return sum;
}
int smallestDivisor( vector<int> &arr, int threshold){
     int maxEle = *max_element(arr.begin(), arr.end());
     int low = 1,high = maxEle;
     int n = arr.size();
     int ans = -1;
     if(n> threshold) return -1;
     while(low<= high){
        int mid=(low+high)/2;
     if(sumbyD(arr,mid)<= threshold){
        ans = mid;
        high = mid-1;
     }
     else low= mid+1;
     }
     return low;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int threshold ;
    cin>>threshold;
    cout<<smallestDivisor(arr, threshold);
    return 0;
}
// TC =O(log(maxEle)*n)