#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
    bool linearSearch(vector<int> &arr,int num){
        for(int i =0; i<arr.size(); i++){
        if(arr[i]==num){
            return true;
        }
        }
        return false;
    }

int LongestConsecutive(vector <int> &arr,int n){
   int maxCount=0;
   for(int i=0; i<n; i++){
    int x = arr[i];
     int count = 1;
    while(linearSearch(arr,x+1)==true){
        x = x+1;
        count = count+1;
    }
    maxCount = max(maxCount,count);
   }
   return maxCount;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<LongestConsecutive(arr,n);
}
//TC - Nearly O(n^2)
//SC - O(1)
