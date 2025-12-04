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
    
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(),0);
        while(low<= high){
            int mid = (low+high)/2;
            int studentcount = fun(arr,mid);
            if(studentcount>m) low = mid+1;
            else high = mid-1;
        }
    
    return low;
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
// TC = O(log(sum-max+1))* o(n)
