#include<bits/stdc++.h>
using namespace std;
 int ReversePair(vector <int> &arr, int n){
   int cnt =0;
   for(int i =0; i<n; i++){
    for(int j =i+1; j<n; j++){
        if(arr[i]>2*arr[j]){ cnt++;}
    }
   }
   return cnt;
 }
 int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<ReversePair(arr,n);
    return 0;
 }
 //TC - O(n^2)
 //Sc - O(1)