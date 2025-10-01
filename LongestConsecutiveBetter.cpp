#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int LongestConsecutive(vector<int> &arr, int n){
    if(n==0) return 0;
    sort(arr.begin(),arr.end());
    int lastsmaller = INT_MIN;
    int longest = 1;
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]-1 == lastsmaller){
         count +=1;
         lastsmaller = arr[i];
        }
        else if(arr[i]!=lastsmaller){
            count = 1;
            lastsmaller =arr[i];
        }
        longest = max(count,longest);
    }
    return longest;

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
//TC - O(nlogn)+O(n)
//SC - O(1)