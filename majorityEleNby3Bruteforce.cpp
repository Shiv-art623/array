#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector <int> MajorityElement(vector <int> &arr, int n){
    vector <int> list;

    for(int i =0; i< n; i++){
        if(list.size()==0 || list[0]!=arr[i]){
        int count =0;
        for(int j =0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count>n/3)
        list.push_back(arr[i]);
    if(list.size() == 2) break;
}
    }
    return list;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = MajorityElement(arr,n);
    for(int i =0; i<2; i++){
        cout<<ans[i];
    }
    return 0;
}
//TC - nearly O(n)
//SC - O(1)