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
int minEle = *min_element(arr.begin(), arr.end());
int maxEle = *max_element(arr.begin(), arr.end());
for(int i = minEle; i<=maxEle; i++){
    int condition = PossibleDays(arr, i,m,k);
if(condition== true){
    return i;
}
}
return -1;
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
//TC = O(maxiele-miniele+1)*n

