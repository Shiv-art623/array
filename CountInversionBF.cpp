#include <bits/stdc++.h>
using namespace std;

int CountInversion(int arr[], int n){
    int count =0;
    for(int i =0; i<n; i++){
      for(int j = i+1; j<n; j++){
        if(arr[i]>arr[j]){
            count++;
        }
      }
    }
    return count;
}
int main(){
    int n; 
    cin>>n;
  int arr[n];
  for(int i =0; i<n; i++){
    cin>>arr[i];
  }
  cout<<CountInversion(arr, n);
  return 0;
}
// TC - O(n^2)
// SC - O(1)