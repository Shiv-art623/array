#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
//This is the optimal Approach BUt sorted answer
vector <int> Leaders(vector <int> &arr,int n){
    vector <int> ans;
    int maxi = INT_MIN;
    for(int i= n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
vector<int> ans = Leaders(arr,n);
for(auto it :ans){
    cout<<it;
}
return 0;
}
//Tc - O(n)+O(nlogn)
//SC - O(n) for the worst case