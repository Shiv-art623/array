#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int MajorityElement(vector <int> &arr, int n){
    int count = 0;
    int ele ;
    for(int i=0 ; i<n; i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if (arr[i]==ele){
            count ++;
        }
        else count--;
    }
    int count1 =0;
    for(int i =0; i<n ; i++){
        if(arr[i]==ele) count1++;
    }
    if (count1 >n/2){
        return ele;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the array element"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<MajorityElement(arr,n);
    return 0;
}
// TC -- O(n)+O(n) the O(n) for when the majority element is not exist
// SC -- O(1)