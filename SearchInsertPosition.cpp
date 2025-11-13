#include <bits/stdc++.h>
using namespace std;

int SearchInsertPosition(vector <int> &arr, int x){
 int n = arr.size();
 int low =0, high = n-1, ans = n;
 while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>=x){ 
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
  cout<<SearchInsertPosition(arr,k);
  return 0;
 }
