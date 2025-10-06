#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<vector<int>> Triplet(vector <int> &arr, int n){
    set <vector<int>> st; //Store unique elements
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            for(int k =j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                vector<int> temp = {arr[i], arr[j], arr[k]};
                sort(temp.begin(),temp.end()); //Sort for uniqueness
                st.insert(temp);
                }
            }
        }
    }
    vector <vector<int>> ans (st.begin(), st.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    vector<vector <int>>ans = Triplet(arr, n);
       for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//TC - O(n^3 * log(no. of unique triples))----> When we use ordered set
//Sc - 2*O(no. of triplets)