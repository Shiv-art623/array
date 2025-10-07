#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int CountSubArray(vector <int> &arr, int k){
     int count = 0;
   for(int i=0; i<arr.size(); i++){
    for(int j= i; j<arr.size(); j++){
        int XOR = 0;
        for(int l=i; l<=j; l++){
          XOR = XOR^arr[l]; 
        }
        if(XOR == k){
            count ++;
          }
    }
  
   }
return count;
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the Desired num"<<endl;
    cin>>k;
    cout<<CountSubArray(arr,k);
    return 0;
}
//TC - Nearly O(N^3)
//SC - O(1)
