#include<bits/stdc++.h>
using namespace std;
int func(vector <int> &arr, int i){
    int totalhrs = 0;
    for(int j =0; j<arr.size(); j++){
        totalhrs+= ceil((double)arr[j]/i); // banana/hr 
    }
    return totalhrs;
}
int countBanana( vector <int> &arr, int hour){
    int n = arr.size();
int maxiEle = *max_element(arr.begin(), arr.end()); // maxiEle = highest hr we can take
for(int i =1; i<=maxiEle; i++){
    int reqTime = func(arr,i);
    if(reqTime<= hour){
        return i;
    }
}
return 0;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int hr;
    cin>>hr;
    cout<<countBanana(arr,hr);
    return 0;
}
//Time complexity O(maxele(arr)*n)   this code will end up with time limit exceed problem