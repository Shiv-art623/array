#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int SubArrayCountwithXOR( vector<int> &arr, int k){
    int n = arr.size();
    map<int,int> mpp;
    int Xor =0;
    int count =0;
    mpp[0]= 1;
    for(int i= 0; i<n; i++){
     Xor = Xor^arr[i];
     int x = Xor^k;
     count+=mpp[x];
     mpp[Xor] ++;
    }
    return count;
 }
 int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the Desired num"<<endl;
    cin>>k;
    cout<<SubArrayCountwithXOR(arr,k);
    return 0;
}
//TC - O(n)+(O(logn)--ordered map and best case O(1))
//Sc - O(n) Worst Case

