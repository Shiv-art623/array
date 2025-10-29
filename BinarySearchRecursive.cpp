#include<bits/stdc++.h>
using namespace std;

int BinarySearch( vector<int> &arr, int low, int high, int target){
   if(low>high) return -1;
    int mid = (low+high)/2;
if(arr[mid]==target) return mid;
else if(arr[mid]> target){ 
    return BinarySearch(arr, low, mid-1,target);
 
}
else{
    return BinarySearch(arr, mid+1, high, target);
}
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
    cout<<BinarySearch(arr, 0, n-1, k);
    return 0;
   }
   //TC - O(log base2 N)
