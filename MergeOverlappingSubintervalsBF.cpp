#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
  vector<vector<int>> MergeOverlapping( vector<vector<int>> &arr, int n){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i =0; i<n; i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && end<= ans.back()[1]) {continue;}
    
    for(int j =i+1; j<n; j++){
        if(arr[j][0]<=end){
            end = max(end,arr[j][1]);
        }
        else{break;}
    }
        ans.push_back({start,end});
        }
        return ans;
    }
    int main(){
       int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));


    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    
    vector<vector<int>> ans = MergeOverlapping(arr, n);

    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}
//TC - O(nlogn)+O(2n)
//SC - O(n)
  