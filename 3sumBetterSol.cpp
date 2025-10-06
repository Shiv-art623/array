#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> &arr, int n){
     set<vector<int>> st;
     for(int i =0; i<n; i++){
        set<int> hashset;
        for(int j =i+1; j<n; j++){
            int third = -(arr[i]+arr[j]);
            if(hashset.find(third)!= hashset.end()){
                vector<int> temp = {arr[i],arr[j],third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
            
        }
     }
     vector<vector<int>> ans(st.begin(), st.end());
    
     
     return ans;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
  vector<vector<int>> ans = ThreeSum(arr,n);
  for(int i =0; i<ans.size(); i++){
    for(int j =0; j<ans[i].size(); j++){
        
        cout<<ans[i][j]<<" ";
    
}
    cout<<endl;
  }
  return 0;
    
}
//TC - N^2 * log(size of set)
//O(N)+ O(size of unique element)