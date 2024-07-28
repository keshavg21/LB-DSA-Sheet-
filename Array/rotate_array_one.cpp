#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int> &arr){
    int n = arr.size();
    int temp = arr[n-1];
    for(int i = n-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void rotate_1(vector<int> &arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}




int main(){
    vector<int>arr = {1,2,3,4,5};
    // o/p: [5,1,2,3,4]
    rotate(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<'\n';
    // o/p : [1,2,3,4,5]
    rotate_1(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}