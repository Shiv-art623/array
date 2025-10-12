#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void swapIfGreater(long long arr1[], long long arr2[], int index1, int index2){
    if(arr1[index1] > arr2[index2]){
    swap(arr1[index1], arr2[index2]);
}
}
int nextGap(int gap){
    if(gap<=1) return 0;
    return (gap/2)+(gap%2);
}

void MergeTwoSortedArray(long long arr1[], long long arr2[], int n, int m){
    int len = (n+m);
    int gap = nextGap(len);

    while(gap>0){
    int left = 0;
    int right = left+gap;
    while(right< len){
        //When both the pointers are present in the arr1 and arr2
        if(left<n && right>= n){
          swapIfGreater(arr1, arr2, left, right-n);}
          //arr2 and arr2 
          else if(left>=n){
            swapIfGreater(arr2,arr2,left-n, right-n);
          }
          //arr1 and arr1
          else{ swapIfGreater(arr1, arr1, left, right);}
          
          left++, right++;
        }
        gap = nextGap(gap);
        
    }
        }
        
    
    int main(){
    int n;
    cin>>n;
    long long arr1[n];
    for(int i =0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    long long arr2[m];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    MergeTwoSortedArray(arr1, arr2, n, m);
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
     for(int i=0; i<m; i++){
        cout<<arr2[i]<<" ";
    }
return 0;
}
//TC - O(log (base2) (n+m)) * O(n+m)
//SC - O(1)
