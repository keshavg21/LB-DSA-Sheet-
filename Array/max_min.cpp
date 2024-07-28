#include<bits/stdc++.h>
using namespace std;


pair<int, int>get_min_max(vector<int>&arr){
    pair<int, int>ans;
    int size = arr.size();
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<size; i++){
        if(mini > arr[i]) mini = arr[i];
        if(maxi < arr[i]) maxi = arr[i];
    }
    ans.first = mini;
    ans.second = maxi;
    return ans;
}




int main(){
    vector<int>arr = {5,3,7,2,10,1,0};
    pair<int, int>ans = get_min_max(arr);
    cout<<ans.first<<" "<<ans.second<<'\n';
    return 0;
}