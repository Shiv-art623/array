#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//Even no. of Positive and negative elements---
vector <int> ReArrangeBySign( vector<int> &arr, int n){
    vector <int> res (n,0);
    int PosIndex = 0;
    int NegIndex = 1;
    for(int i=0; i<n; i++){
        if(arr[i]<0){ res[NegIndex] =arr[i];
       NegIndex +=2;
        }
       else{
        res[PosIndex]= arr[i];
        PosIndex +=2;
       }
        }
        return res;
        
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
     
    
     vector<int> res = ReArrangeBySign(arr,n); 
     for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
     }
    return 0;

}
    
     


