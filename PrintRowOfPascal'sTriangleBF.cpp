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
    int row ;
    cout<<"enter the row no."<<endl;
    cin>>row;
    for(int i = 0 ; i<=row-1; i++){
        cout<<FunNCR(row-1, i);
    }
    return 0 ;
}
//TC - O(n*r)