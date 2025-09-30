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
//TC - nearly O(n^2)
//Sc - O(1)   worst case==(if when all the elements of the array are leaders the we have to store every element in the answer ) ---- so the SC will be nearly O(n)