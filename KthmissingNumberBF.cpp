#include<bits/stdc++.h>
using namespace std;

int KthMissingNO(vector <int> &arr, int k){
    for(int i =0; i<arr.size(); i++){
        if(arr[i]<= k) k++;
        else break;
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<KthMissingNO(arr,k);
}
//Tc - O(n)
