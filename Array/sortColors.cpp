#include<bits/stdc++.h>
using namespace std;

// Dutch National Flag Alogrithm TC - O(N)
void sortColors(vector<int>&arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    // Soln 1 - sort the array TC - O(nlogn)
    // Soln 2 - Count 0s, 1s, 2s and then assign it in the given array TC - O(2N)
    vector<int>arr = {2,0,2,1,1,0};
    sortColors(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}