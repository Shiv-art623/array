#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void FindMissingAndRepeatingElement( long long arr[], int n){
    int miss = -1;
    int repea = -1;
    for(int i = 1; i<=n; i++){
       int count =0;
        for(int j =0; j<n; j++){
         if(arr[j]== i){
            count++;
         }
        }
         if (count == 2) {repea = i;}
         else if(count == 0) {miss = i;}
         if (miss != -1 && repea != -1){
            break;
         }

        
    }
    cout<<miss<<"  "<<repea;


}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
  FindMissingAndRepeatingElement(arr, n);
 
 return 0;
}
// Tc - O(n^2)
// SC - O(1)