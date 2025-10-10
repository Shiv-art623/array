#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void MergeTwoSortedArray (long long arr1[], long long arr2[], int n, int m){
    long long arr3[n+m];
    int left =0;
    int right = 0;
    int index =0;
    while( left< n && right < m){
        if( arr1[left] <= arr2[right]){
            arr3[index] = arr1[left];
            left++; index++;
        }
        else{
            arr3[index] = arr2[right];
            right++; index++;
        }
    }
    while(left<n) {arr3[index++] = arr1[left++];}
    while(right<m) {arr3[index++] = arr2[right++];}
    for(int i =0; i<n+m; i++){
        if(i<n) {arr1[i] = arr3[i];}
        else {arr2[i-n] = arr3[i];}
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
//TC - O(n+m)+O(n+m)
//Sc - O(n+m)