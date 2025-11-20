#include<bits/stdc++.h>
using namespace std;
 int FindSingleElement(vector <int> &arr , int n){
    if(n == 1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!= arr[n-2]) return arr[n-1];
    int low =1, high = n-2;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid]!= arr[mid+1] && arr[mid]!=arr[mid-1]){ return arr[mid];}
        //WE ARE IN THE LEFT 
        if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){ low = mid+1;}
        else{//WE ARE IN THE RIGHT
            high = mid-1;
        }
    }
    return -1;
    }
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<FindSingleElement(arr,n);
    return 0;
}
// Tc = O(logn)