#include<bits/stdc++.h>
using namespace std;

vector<int>getIntersection(vector<int>&arr1, vector<int>&arr2){
    vector<int>ans;
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}



int main(){
    vector<int>arr1 = {1,1,2,3,4,5};
    vector<int>arr2 = {2,3,4,4,5,6};
    vector<int>ans = getIntersection(arr1, arr2);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}