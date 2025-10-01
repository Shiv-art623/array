#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int LongestConsecutive( vector <int> &arr, int n){
    if(n == 0) return 0;
    int longest =1;
    unordered_set <int> st;
    for(int i =0; i<n; i++ ){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int count =1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                count +=1;
            }
            longest = max(longest,count);
        }
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
//TC - Best/Avg=O(1)           worst/Collision+O(n)
//SC - O(n)