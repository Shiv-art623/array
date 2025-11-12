#include<bits/stdc++.h>
using namespace std;

int lowerBound( vector<int> &arr, int low, int high, int k){
  int ans = 0;
 while(low<= high){
  int mid = (low+high)/2;
  if(arr[mid]>=k){
    ans = mid;
    high = mid-1;
  }
  else{ low = mid+1;}
 }
 return ans;
}
 int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i =0; i<n; i++){
    cin>>arr[i];
  }
  int k; cin>>k;
  cout<<lowerBound(arr,0,n-1,k);
  return 0;
 }
