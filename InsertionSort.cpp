#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr, int n){
    for(int i =0; i<n; i++){
        int j=i;
   while(j>0 && arr[j-1]>arr[j]){
int temp = arr[j-1];
arr[j-1] = arr[j];
arr[j] = temp;
j--;
    }
}
for(auto it : arr){
    cout<<it;
}
}
int main(){
    
   int n ;
   cin>>n;
   vector<int> arr(n);
   for(int i =0; i<n; i++){
    cin>>arr[i];
   }
   
   InsertionSort(arr,n);
   return 0;
}
//Tc = O(N^2) Worst and Average
// for Best = O(N)