#include<bits/stdc++.h>
using namespace std;


void BubbleSort(vector<int> &ar, int n){
for(int i= n-1; i>=1; i--){
    for(int j =0; j<= i-1; j++){
        if(ar[j]>ar[j+1]){
        int temp = ar[j];
         ar[j] = ar[j+1];
         ar[j+1] = temp;
        }
    }

}
for(auto it: ar){
    cout<<it<<" ";
}
}
int main(){
    
   int n ;
   cin>>n;
   vector<int> arr(n);
   for(int i =0; i<n; i++){
    cin>>arr[i];
   }
   
   BubbleSort(arr,n);
   return 0;
}
//TC = O(N^2) for worst and average case
// for best case(when array is already sorted) = O(N)