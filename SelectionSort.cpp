#include<bits/stdc++.h>
using namespace std;

void SelectionSort( vector<int> &arr, int n){
    
        for(int i =0; i<=n-2; i++){
            int mini = i;
        for(int j = i; j<n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
                            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
      
    }
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
}
int main(){
    
   int n ;
   cin>>n;
   vector<int> arr(n);
   for(int i =0; i<n; i++){
    cin>>arr[i];
   }
   
   SelectionSort(arr,n);
   return 0;
}
//Time complexity will remain same for best , average and worst - O(n^2)