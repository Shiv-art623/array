#include<bits/stdc++.h>
using namespace std;
//this code for overcome the overflow
int func(int mid, int n, int m){
long long ans = 1;
for(int i =1; i<=n; i++){
    ans*=mid;
    if(ans>m) return 2;
}
    if (ans == m) return 1;
    return 0;
}
int Nthroot(int n, int m){
    int l = 1, h = m;
    while(l<=h){
        int mid = (l+h)/2;
        int MidN = func(mid,n,m);
      if(MidN == 1) return mid;
      else if(MidN == 0) l = mid+1;
      else h = mid-1;
    }
    return -1;
}
int main(){
    int n, m;
    cin>>n>>m;
    cout<<Nthroot(n,m);
    return 0;
}
//TC = O(log m) * O(n)
