#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,22,12,3,0,6};
    for(int i =0; i<6; i++){
        bool leader = true;
        for(int j=i+1; j<6;j++){
        if(arr[j]>arr[i]){
            leader = false;
            break;
        }

    }
    if(leader==true) cout<< arr[i]<<" ";
}
return 0;
}