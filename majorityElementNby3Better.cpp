#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector <int> MajorityElement(vector <int> &arr){
    vector<int> list;
    map <int,int> ans;
    int mm = arr.size()/3+1;
    for(int i =0; i<arr.size(); i++){
    ans[arr[i]]++;
  if(ans[arr[i]]==mm) 
  list.push_back(arr[i]);
    }
    return list;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements"<<endl;
    for(int i =0; i<arr.size(); i++){
        cin>>arr[i];
    }
    vector<int> ans = MajorityElement(arr);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}