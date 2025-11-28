#include<bits/stdc++.h>
using namespace std;
int FunAns(vector<int> &arr, int threshold){
    int maxEle = *max_element(arr.begin(), arr.end());
    for(int d = 1; d<=maxEle; d++){
        int sum =0;
        for(int i =0; i<arr.size(); i++){
        sum+= ceil(arr[i]/(double)d);
        }
        if(sum <= threshold) return d;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int thre;
    cin>>thre;
    cout<<FunAns(arr,thre);
    return 0;
}
//TC = O(maxEle*n)