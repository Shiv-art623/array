#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int BuyNsellStock (vector<int> &arr, int n){
    int mini = arr[0];int profit =0;
    for(int i=0; i<n; i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
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
    cout<<BuyNsellStock(arr,n);
    return 0;
}
//TC - O(N)
//SC - O(1)
