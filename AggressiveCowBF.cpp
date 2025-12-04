#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int> &arr, int dist, int cows){
    int n = arr.size();
    int countCows = 1;
    int last = arr[0];
    for(int i =1; i<n ; i++){
        if(arr[i]-last >= dist){
            countCows++;
            last = arr[i];
        }
    }
    if(countCows>= cows) return true;
    else return false;
}
int fun(vector <int> &arr, int cows){
    int n =arr.size();
    sort(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());
    int mini = *min_element(arr.begin(), arr.end());
    for(int i =1; i<= (maxi-mini); i++){
        if(canWePlace(arr, i, cows)== true) continue;
        else return (i-1);
        }
        return maxi-mini;
    }
    int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int cows;
    cin>>cows;
    cout<<fun(arr,cows); 
    return 0;
}
//TC = O(mixi - mini) * O(n)
