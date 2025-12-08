#include<bits/stdc++.h>
using namespace std;

double median(vector<int> &arr1, vector<int> &arr2 ){
    vector <int> arr3;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1+n2;
    int i =0, j =0;
    int ind1 = n/2;
    int ind2 = ind1-1;
    int cnt =0, ind2el = -1, ind1el = -1;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) {
            if(cnt == ind1) ind1el = arr1[i];
            if(cnt == ind2) ind2el = arr1[i];
            cnt++;
            i++;
        }
        else {
            if(cnt == ind1) ind1el = arr2[j];
            if(cnt == ind2) ind2el = arr2[j];
            cnt++;
            j++;

        }
    }
    while(i<n1 ){
            if(cnt == ind1) ind1el = arr1[i];
            if(cnt == ind2) ind2el = arr1[i];
            cnt++;
            i++;
        }
        while(j<n2 ){
            if(cnt == ind1) ind1el = arr2[j];
            if(cnt == ind2) ind2el = arr2[j];
            cnt++;
            j++;
        }
    if(n%2 == 1){
        return ind1el;
    }
    return (double)((double)(ind1el+ind2el))/2.0;
}
int main(){
int n1; 
cin>>n1;
 vector <int> arr1(n1);
 for(int i =0; i<n1;i++){
  cin>>arr1[i];
 }
 int n2; 
cin>>n2;
 vector <int> arr2(n2);
 for(int j =0; j<n2;j++){
  cin>>arr2[j];
 }
 cout<<median(arr1,arr2);
 return 0;
}