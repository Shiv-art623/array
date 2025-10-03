#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int CountSubArray(vector <int> &arr, int k){
    int count =0;
    for(int i =0; i<arr.size(); i++){
            int sum = 0;
        for(int j =i; j<arr.size(); j++)
{
        sum +=arr[j];
    
    if(sum == k ) count++;
}
}    

return count; 
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<CountSubArray(arr,k);
  return 0;
}
//Tc - nearly O(N^2)