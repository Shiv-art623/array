#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

 vector <int> NextPermutation(vector <int> &arr, int n){
    int index =-1;
   for(int i =n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
        index = i;
        break;
    }
   }
   if(index==-1){
    reverse(arr.begin(),arr.end());
    return arr;
   }
   for(int i=n-1; i>index; i--){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[index]);
        break;
    }
   }
   reverse(arr.begin()+index+1,arr.end());
   return arr;
 }
  int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the array element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     vector<int> res = NextPermutation(arr,n); 
     for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
     }
    return 0;

}
//TC - Worst case = O(3N)
//SC - sometimes = O(n) but we consider as O(1))