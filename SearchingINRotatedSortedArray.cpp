#include <bits/stdc++.h>
using namespace std;

int SearchRotatedSortedArray(vector <int> &arr, int n,int k){
    int low = 0, high = n-1;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid]==k) return mid;
        if(arr[low]<= arr[mid]){
            if(arr[low]<= k && k<=arr[mid]) {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<= arr[high])
           low = mid+1;
           else{
            high = mid-1;
           }
        }
    }
    return -1;
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
    cout<< SearchRotatedSortedArray(arr, n,x);

    return 0;
}
// TC -O(log2 n)