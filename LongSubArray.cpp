#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;
int LongSubarrayWithSumK(vector <int> arr, long long k){
    map <long long, int> preSumMap;
    long long sum =0;
    int maxlen = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(sum == k){
        maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if (preSumMap.find(sum)== preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxlen;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    long long k;
    cout<<"Enter the sum"<<endl;
    cin>>k;
    vector <int> arr(n);
    cout<<"enter the elements"<<endl;
    for(int i=0; i<arr.size(); i++){
     cin>>arr[i];
    }
    cout<<LongSubarrayWithSumK(arr,k);
    return 0;
}