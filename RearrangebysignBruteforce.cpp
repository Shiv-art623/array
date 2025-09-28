#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//Even no. of Positive and negative elements---
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
    //TC - O(N+N/2)
    //SC - O(n)

    //No of positive and negative elements are not same--
   vector <int> ReArrangeBySign(vector <int> &arr, int n){
vector <int> pos, neg;
for(int i=0; i<n; i++){
    if(arr[i]>0) pos.push_back((arr[i]));
    else neg.push_back((arr[i]));
}
if(pos.size()>neg.size()){
    for(int i =0; i<neg.size();i++){
        arr[2*i]= pos[i];
        arr[2*i+1]= neg[i];
    }
    int index = neg.size()*2;
    for(int i=neg.size(); i<pos.size();i++){
         arr[index]=pos[i];
         index++;
    
    }
}
else{
    for(int i=0; i<pos.size(); i++){
        arr[2*i]= pos[i];
        arr[2*i+1]= neg[i];
    }
    int index = pos.size()*2;
    for(int i= pos.size(); i<neg.size(); i++){
        arr[index]=neg[i];
        index++;
    }
}
return arr;

   }
  // TC - O(2N)
  // SC - O(n)
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
