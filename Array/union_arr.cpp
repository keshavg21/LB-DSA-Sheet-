#include<bits/stdc++.h>
using namespace std;

vector<int>getUnion(vector<int>&arr1, vector<int>&arr2){
    vector<int>uni;
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            if(uni.size() == 0 || uni.back() != arr1[i]){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(uni.size() == 0 || uni.back() != arr1[i]){
                uni.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
        }
        j++;
    }
    return uni;
}



int main(){
    vector<int>arr1 = {1,1,2,3,4,5};
    vector<int>arr2 = {2,3,4,4,5,6};
    vector<int>ans = getUnion(arr1, arr2);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}