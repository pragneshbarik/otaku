#include<bits/stdc++.h>
using namespace std;


int find_pivot(vector<int> nums){
    int low = 0; 
    int high = nums.size()-1 ; 
    int mid = low + (high-low)/2;
    while(low<high){
        if (nums[low]<nums[high]) return low;
        else if(nums[mid]>=nums[0]) low = mid + 1;
        else high=mid;
        mid = low+(high-low)/2;
    }
    return low;
}

int main() {
    vector<int> v = {1,3};
    cout<<find_pivot(v);
    
}