#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
  
void MergeTwoSortedArray(long long  arr1[], long long arr2[], int n, int m){
    int left = n-1;
    int right = 0;
    while(left>= 0 && right< m){
        if(arr1[left]> arr2[right]){
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else{ break;}
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
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
//TC - O(min(n,m))+ O(nlogn)+O(mlogm)
//Sc - O(1)