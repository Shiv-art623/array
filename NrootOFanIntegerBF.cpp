#include<bits/stdc++.h>
using namespace std;

int func(int i, int n){
    int ans =1;
    for(int j=1; j<=n; j++ ){
      ans*=i;
    }
    return ans;
}
int NthRoot(int n, int m){
    for(int i =1; i<m; i++){
        if(func(i,n)== m) return i;
        else if(func(i,n)>m)
        break;
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<NthRoot(n,m);
    return 0;
}
//TC = O(m)
