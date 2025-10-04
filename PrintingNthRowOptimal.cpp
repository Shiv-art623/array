#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int main(){
  int row;
  cin>>row;
  int ans =1;
  cout<<ans;
  for(int i = 1; i<row; i++){
    ans = ans*(row-i);
    ans = ans/i;
    cout<<ans;
  }
  return 0;
 }
 //TC - O(n)
 //SC - O(1)