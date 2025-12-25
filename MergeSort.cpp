#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high; i++){
        arr[i]= temp[i-low];
    }
}
void mS(vector <int> &arr, int low, int high){
    if(low== high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1, high);
    merge(arr,low,mid,high); //merging take O(n) time complexity at worst case
}
void mergeSort(vector <int> &arr, int n){ 
    mS(arr, 0, n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}
// Time complexity = O(n * log base 2 n) for best, average, worst case
// Space complexity = O(n)