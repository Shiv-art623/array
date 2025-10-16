#include <bits/stdc++.h> 
using namespace std;

vector <int>  RepeatingAndMissingEle( long long arr[], int n){
    long long SN = (n*(n+1))/2;
    long long S2N = (n*(n+1)*(2*n+1))/6;
    long long S1 =0, S2 = 0;
    for(int i=0; i<n; i++){
        S1+=arr[i];
        S2+=arr[i]*arr[i];
    }
    long long value1 =  S1-SN; //X-Y
    long long value2 =  S2-S2N;
    value2 = value2/value1; //X+Y
    long long x = (value1+value2)/2;
    long long y = x- value1;
    return {(int)x, (int)y};
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = RepeatingAndMissingEle(arr,n);
    cout<<ans[0]<<"  "<<ans[1];
    return 0;
}
// Tc - O(n)
// SC - O(1)