#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&arr, int d){
    int n = arr.size();
    d = d % n;
    vector<int>temp;
    for(int i = 0; i<d; i++){
        temp.push_back(arr[i]);
    }
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

void helper_optimize(vector<int>&arr, int d){
    reverse(arr.begin(), arr.begin() + d); //reverse arr from start to d-1 index
    reverse(arr.begin() + d, arr.end()); // reverse array from d index to last
    reverse(arr.begin(), arr.end()); // reverse the whole array
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    // o/p - [4,5,6,7,1,2,3]
    int d = 4;
    helper_optimize(arr, d);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}