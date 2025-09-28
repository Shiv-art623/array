#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector <int> RearrangeBySign(vector<int> &arr,int n){
    vector <int> pos;
    vector <int> neg;
    for(int i=0; i<n; i++){
        if (arr[i]>=0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    for(int i=0; i<n/2; i++){
     arr[2*i]= pos[i];
     arr[2*i+1]= neg[i];
    }
    return arr;
    }
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the array element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    RearrangeBySign(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}