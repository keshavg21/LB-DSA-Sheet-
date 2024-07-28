#include<bits/stdc++.h>
using namespace std;

 int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        priority_queue<int>pq(nums.begin(), nums.end());
        // for(int i = 0; i<size; i++){
        //     pq.push(nums[i]);
        // }
        while(k-1 > 0){
            pq.pop();
            k--;
        }
        return pq.top();
    }

int findKthSmallest(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());
    while(k-1 > 0){
        pq.pop();
        k--;
    }
    return pq.top();
}


int main(){
    int k = 4;
    vector<int>arr = {5,3,7,2,10,1,0};
    int kthlargest = findKthLargest(arr, 4);
    cout<<kthlargest<<" "<<'\n';
    int kthsmallest = findKthSmallest(arr, 6);
    cout<<kthsmallest<<" ";
    return 0;
}