#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int MajorityElement(vector <int> &arr, int n){
    for(int i =0; i<n; i++){
        int count = 0;
        for (int j=0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count > n/2) return arr[i];
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
//Tc -- O(N^2)