#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long  ReturnElement(int n, int r){
    long long ans = 1;
    for(int i =0; i<r; i++){
        ans = ans*(n- i);
        ans = ans/(i+1);
        }
        return ans;
}
int main(){
    int n ;
    cout<<"enter the row no."<<endl;
    cin>>n;
    int r;
    cout<<"enter the column no."<<endl;
    cin>>r;
    cout<<ReturnElement(n-1,r-1);
    return 0;
}