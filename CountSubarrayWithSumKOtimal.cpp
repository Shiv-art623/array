#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int CountSubArrays( vector<int> &arr, int k){
    unordered_map<int,int> ans;
    ans[0]= 1;
    int preSum = 0;  int cnt = 0;
    for(int i =0; i<arr.size(); i++){
        preSum+=arr[i];
        int remove = preSum - k;
        cnt += ans[remove];
        ans[preSum]+=1;
    }
    return cnt;
 }
 int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<CountSubArrays(arr,k);
  return 0;
}
//TC - N*logn
//SC - O(N)