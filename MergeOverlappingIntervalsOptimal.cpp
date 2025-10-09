#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
  vector<vector <int>> MergeOverlappingIntervals( vector<vector<int>> &arr, int n){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(ans.empty() || arr[i][0]> ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
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

    
    vector<vector<int>> ans = MergeOverlappingIntervals(arr, n);

    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}
//TC - nlogn + O(n)
//SC - O(n)