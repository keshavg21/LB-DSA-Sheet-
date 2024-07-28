#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr){
    // TC - O(n) where n is the size of the array
    // SC - O(1)
    int size = arr.size();
    int start = 0, end = size-1;
    while(start < end){
        // swap(arr[i], arr[j]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main(){
    vector<int>arr = {1,2,3,4,5,6};
    reverse(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}