#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
//Using Hashing----
using namespace std;
string TwoSum(vector <int> arr, int n, int target){
    map <int ,int> mpp;
    for(int i =0;i<n; i++){
        int element = arr[i];
        int rem = target - element;
        if(mpp.find(rem)!=mpp.end()){
            return "Yes";   // for index return{mpp[rem],i}
        }
        mpp[element]= i;
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
//TC --
// *when we use ordered map ---- O(NlogN)
// *when we use unordered map --- * Best case/Average case--O(N)      *Worst case -- O(n^2)
