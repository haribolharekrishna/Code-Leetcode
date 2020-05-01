#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    int search(vector<int>&nums, int target) {
        
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+((h-l)/2);
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<nums[h] && target<nums[h] && target>nums[mid])

        }
        
    }
};