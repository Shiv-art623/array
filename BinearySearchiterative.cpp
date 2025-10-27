#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
  int k;
  cin>>k;
int low = 0;
int high = n-1;

   while(low<= high){
    int mid = (low+high)/2;
  if (arr[mid]==k){
    cout<<mid;
    break;
  }
  else if(k> arr[mid])
   low = mid+1;
   
   else if(k< arr[mid]){
    high = mid -1;
   }
   else cout<<"Not found";
}
return 0;
}
//TC - O(n)
//Sc - O(1)
