#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 vector<int> SortArr(vector <int> &arr, int n){
    int low = 0;
    int mid =0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid]==1) mid++;
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
 }
int main(){
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the 0/1/2"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    SortArr(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}