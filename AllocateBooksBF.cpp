#include <bits/stdc++.h>
using namespace std;
int fun(vector <int> &arr, int pages){
    int stu = 1; int PgStu = 0;
    for(int i =0; i<arr.size(); i++){
        if(PgStu+arr[i]<=pages){
            PgStu+=arr[i];
        }
        else{
            stu++;
            PgStu = arr[i];
        }
    }
    return stu;
}
int AllocateBooks(vector <int> &arr, int m){
    if( m> arr.size()) return -1;
    else{
    int low = *max_element(arr.begin(), arr.end());
    int high =0;
    for(int i=0; i<arr.size(); i++ ){
        high += arr[i];
    }
    
    for(int pg = low; pg<= high; pg++){
         int countstu = fun(arr, pg);
         if(countstu == m) return pg;
    }
}
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int students;
    cin>>students;
    cout<<AllocateBooks(arr,students); 
    return 0;
}
// TC = O((sum-max+1)*n)+O(n)
