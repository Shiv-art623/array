#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
pair <int , int > Twosum(vector <int> &arr, long long targ){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
        if(i==j) continue;
        
        else if (arr[i]+arr[j]==targ){
        return {i, j};
        }
        }
    }
        return {-1,-1}; //  not found condition
    }
    int main(){
        int n;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        long long target;
        cout<<"enter the targeted value"<<endl;
        cin>>target;
        vector <int> arr(n);
        cout<<"enter the array elements"<<endl;
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
    pair<int, int> result = Twosum(arr,target);
    if(result.first== -1){
        cout<<"not found"<<endl;
    }
    else
    cout<<"Indices  "<<result.first <<"   and   "<<result.second<<endl;
return 0;
    }

