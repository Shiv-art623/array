#include <bits/stdc++.h>
using namespace std;

int FindMin( vector <int> &arr){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;

    while(low<= high){
        int mid = (low+high)/2;
        //Left Part Eliminated
        if(arr[low]<= arr[mid]){
            ans = min(arr[low], ans);
            low = mid+1;
        }
        //Right part eliminated
        else{
            high = mid-1;
            ans = min(arr[mid], ans );
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
    cout<<FindMin(arr);
    return 0;
}
//TC - O(logn)