#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int MajorityElement(vector <int> arr,int n ){
    map <int, int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second>n/2) return it.first;
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