#include <bits/stdc++.h>
using namespace std;

vector<int> FirstlastOccurence (vector<int> &arr, int x){
    int n = arr.size();
    int first = -1,  last = -1;
    for(int i =0; i<n; i++){
        if(arr[i] == x){
            if(first == -1) first = i;
            last = i;
        }
    }
    return {first, last};
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    vector <int> ans = FirstlastOccurence(arr,x);
    cout<< ans[0] <<" "<<ans[1];
    return 0;
}