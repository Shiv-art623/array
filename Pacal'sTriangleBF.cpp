#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long  FunNCR(int n, int r){
    long long ans = 1;
    for(int i =0; i<r; i++){
        ans = ans*(n- i);
        ans = ans/(i+1);
        }
        return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
       cout<< (FunNCR(i-1, j-1));
        }
        cout<<endl;
        
    }
   
    return 0;
}