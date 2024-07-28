#include<bits/stdc++.h>
using namespace std;

// Dutch National Flag Algorithm for two “colors”

void helper_1(vector<int>&arr){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
            low++, high--;
        }
    }
}

void helper(vector<int>&arr){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        if(arr[low] < 0 and arr[high] > 0){
            low++, high--;
        }
        else if(arr[low] < 0 and arr[high] < 0){
            low++;
        }
        else if(arr[low] > 0 and arr[high] < 0){
            swap(arr[low], arr[high]);
            low++, high--;
        }
        else if(arr[low] > 0 and arr[high] > 0){
            high--;
        }
    }
}


int main(){
    // vector<int>arr = {-2, 1, 2, -3, 4, 4};
    vector<int>arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    helper_1(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}