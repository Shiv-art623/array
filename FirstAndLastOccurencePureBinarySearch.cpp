#include<bits/stdc++.h>
using namespace std;

int  firstOccu(vector <int> &arr, int n, int x){
    int l =0, h = n-1, first = -1;
    while(l<=h){
        int mid = (l+h)/2;
    if(arr[mid]==x){
        first = mid;
        h = mid-1;
    }
    else if (arr[mid]< x){
        l = mid+1;
    }else{
        h = mid-1;
    }
    }
    return first;
}

int  lastOccu(vector <int> &arr, int n, int x){
    int l =0, h = n-1, last = -1;
    while(l<=h){
        int mid = (l+h)/2;
    if(arr[mid]==x){
        last = mid;
        l = mid+1;
    }
    else if (arr[mid]< x){
        l = mid+1;
    }else{
        h = mid-1;
    }
    }
    return last;
}
pair<int, int> FirstAndLastAcc( vector <int> arr , int n, int x){
    int first = firstOccu(arr, n , x );
    if(first == -1) return {-1,-1};
    int last = lastOccu( arr, n, x);
    return {first, last};
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
    pair<int, int> ans = FirstAndLastAcc(arr, n,x);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}