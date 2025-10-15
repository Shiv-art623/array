#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector <int> RepeatinAndMissingElement( int arr[], int n){
    int repeat = -1;
    int missing = -1;
    int hash[n+1] ={0};
    for(int i=0; i<n; i++){
      hash[arr[i]]++;
    }
    for(int i=1; i<=n; i++){
        if(hash[i]==2) {repeat = i;}
        else if(hash[i]== 0) {missing = i;}
        if( repeat != -1 &&  missing != -1){ break;}
    }
    return {repeat, missing};
}
int main(){
 int n;
  cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
 vector<int> res =  RepeatinAndMissingElement(arr, n);
  cout<<res[0]<<"  "<<res[1];
 return 0;
} 
// TC - O(2N)
// SC - O(N) for HashArray