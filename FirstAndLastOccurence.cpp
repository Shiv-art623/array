#include <bits/stdc++.h>
using namespace std;
int LowerBound( vector <int> &arr, int n, int x){
int low =0, high = n-1;
int ans = n;
while(low<= high){
    int mid = (low+high)/2;
    if(arr[mid]>=x){
        ans = mid;
        high = mid-1;
    }
    else{
        low = mid+1;
    }
}
return ans;
}
int UpperBound( vector <int> &arr, int n, int x){
int low =0, high = n-1;
int ans = n;
while(low<= high){
    int mid = (low+high)/2;
    if(arr[mid]>x){
        ans = mid;
        high = mid-1;
    }
    else{
        low = mid+1;
    }
}
return ans;
}
pair<int , int> CheckOccurence( vector <int> &arr, int n, int x){
    int lb = LowerBound(arr, n, x);
    if(lb == n || arr[lb]!= x) return {-1, -1};
    return {lb, (UpperBound(arr, n, x)-1) };
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    int x;
    cin>>x;
    pair<int, int> ans = CheckOccurence(arr, n,x);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}
// TC - 2*O(log n) and SC - O(1)

