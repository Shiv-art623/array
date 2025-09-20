#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> Sortarr(vector <int> &arr, int n){
    int count0 =0; 
    int count1 = 0;
    int count2= 0;
    for( int i =0;  i<n; i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
    }
    for(int i =0; i<count0; i++) arr[i]=0;
    for(int i = count0; i<count0+count1; i++) arr[i]=1;
    for(int i =count0+count1; i<n; i++) arr[i]=2;
    return arr;
}
int main(){
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the 0/1/2"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    Sortarr(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}
//Tc = O(2N)
//SC = O(1)