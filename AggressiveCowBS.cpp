#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int> &arr, int dist, int cows){
    int n = arr.size();
    int countCows = 1;
    int last = arr[0];
    for(int i =1; i<n ; i++){
        if(arr[i]-last >= dist){
            countCows++;
            last = arr[i];
        }
    }
    if(countCows>= cows) return true;
    else return false;
}
int fun(vector <int> &arr, int cows){
    int n =arr.size();
    sort(arr.begin(), arr.end());
    int low =0, high = arr[n-1]-arr[0];
    int ans = -1;
    while(low<= high){
        int mid = (low+high)/2;
        if(canWePlace(arr, mid, cows)== true){
            ans = mid ;
            low = mid+1;
        }
        else high = mid-1;
    }
    return high ; //Or you can return ans
    }
    int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int cows;
    cin>>cows;
    cout<<fun(arr,cows); 
    return 0;
}
//TC = O(nlogn) + [O(log(maxi-mini)) * O(n)]

