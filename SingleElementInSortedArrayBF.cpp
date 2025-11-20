#include<bits/stdc++.h>
using namespace std;

int FindMINEle(vector <int> &arr, int n){
    int ans = -1;
    if(n == 1){
        ans = arr[0];
    }
    for(int i =0; i<n; i++){
       if(i==0) {
        if (arr[i]!=arr[i])
        ans =  arr[i];
       }
       else if(i == n-1){
        if(arr[i]!=arr[i-1])
        ans = arr[i];
        }
        else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
            ans =  arr[i];
        }
       }
       return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<FindMINEle(arr,n);
    return 0;
}
//TC = O(n)