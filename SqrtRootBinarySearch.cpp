#include<bits/stdc++.h>
using namespace std;

int FindSqrt( int n){
    int low = 1;
    int high = n;
    int ans = 1;
    while(low<=high){
        long long mid = (low+high)/2;

        if((mid*mid)<=n){
            ans = mid;
            low = mid+1;
            
        }
        else 
        
        high = mid-1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<FindSqrt(n);
}