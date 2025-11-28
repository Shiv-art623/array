#include<bits/stdC++.h>
using namespace std;

int PossibleDays(vector <int> &arr, int day, int m, int k){
    int count =0;
    int noOfBouquet = 0;
    int n = arr.size();
    for(int i =0; i<n; i++){
        if(arr[i]<= day) count++;
        else{
            noOfBouquet+=(count/k);
            count =0;
        }
    }
    noOfBouquet+= count/k;
    if(noOfBouquet>= m){
      return true;
    }
    else return false;
}
int BloomDay( vector <int> &arr, int m, int k){
if(arr.size()< m*k) return -1;
int low = *min_element(arr.begin(), arr.end());
int high = *max_element(arr.begin(), arr.end());
int ans =0;
while(low<=high){
    int mid = (low+high)/2;
    int condition = PossibleDays(arr, mid,m,k);
if(condition== true){
    ans = mid;
    high = mid-1;
}
else{
    low = mid+1;
}
}
return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int k;
    cin>>k;
    cout<<BloomDay(arr,m,k);
    return 0;
}
//TC = O(n*log (maele-minELe+1))