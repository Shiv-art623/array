#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
string TwoSum (vector <int> arr, int n, int target){
    int left =0; 
    int right = n-1;
    sort(arr.begin(),arr.end());
    while(left< right){
        int sum = arr [left] + arr[right];
        if(sum == target){
            return "Yes";
        }
        else if (sum<target){
            left++;
        }
        else right--;
    }
    return "No";
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int target;
    cout<<"Enter the targeted value"<<endl;
    cin>>target;
    vector <int> arr(n);
    cout<<"Enter the array elements"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<TwoSum(arr,n,target);
    return 0;
}
//TC -- O(n)+O(nlogn)
//SC -- O(1)  OR O(N)

